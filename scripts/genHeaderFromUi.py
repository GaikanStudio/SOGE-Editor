import os
import argparse
import hashlib

from pathlib import Path
from subprocess import run
from subprocess import PIPE


UI_EXT = ".ui"
HEADER_EXT = ".hpp"
HASH_PATH = os.path.abspath(os.path.dirname(__file__)) + r"\hash"

def md5_hash_file(filename, hash):
    assert Path(filename).is_file()
    with open(str(filename), "rb") as f:
        for chunk in iter(lambda: f.read(4096), b""):
            hash.update(chunk)
    return hash

def md5_hash_dir(directory, hash):
    assert Path(directory).is_dir()
    for path in sorted(Path(directory).iterdir(), key=lambda p: str(p).lower()):
        hash.update(path.name.encode())
        if path.is_file():
            hash = md5_hash_file(path, hash)
        elif path.is_dir():
            hash = md5_hash_dir(path, hash)
    return hash

def md5_file(filename):
    return md5_hash_file(filename, hashlib.md5()).hexdigest()

def md5_dir(directory):
    return md5_hash_dir(directory, hashlib.md5()).hexdigest()

if __name__ == "__main__":
    # include_dir = None
    # uic_path = None

    # parser = argparse.ArgumentParser(
    #     prog="genHeaderFromUi",
    #     description="This program generates C++ header files from Qt ui files",
    #     epilog="=================================================="
    # )

    # parser.add_argument(
    #     "-i", "--include",
    #     help = "Qt poroject include directory path",
    #     type = str
    # )

    # parser.add_argument(
    #     "-u", "--uic",
    #     help = "Qt uic path",
    #     type = str
    # )

    # args = parser.parse_args()
    # include_dir = args.include
    # uic_path = args.uic
    include_dir = r"A:\repo\SOGEQtE\SOGEQtE\include"
    uic_path = r"A:\DevTools\Qt\6.5.3\msvc2019_64\bin\uic.exe"

    if not os.path.exists(HASH_PATH):
        os.mkdir(HASH_PATH)

    for root, subfolders, files in os.walk(include_dir):
        current_path = root

        for dir in subfolders:
            full_path = os.path.join(root, dir)
            relative_path = Path(full_path).relative_to(include_dir)
            hash_path = os.path.join(HASH_PATH, relative_path)
            
            if not os.path.exists(hash_path):
                os.mkdir(hash_path)

        for file in files:
            filepath = os.path.join(root, file)
            filename = os.path.basename(filepath)
            if filepath.endswith(UI_EXT):
                relative_path = Path(filepath).relative_to(include_dir)
                ui_header_path = os.path.dirname(filepath)
                ui_header_name = "ui_" + filename.replace(UI_EXT, HEADER_EXT)
                ui_header_path = os.path.join(ui_header_path, ui_header_name)
                hash_path = os.path.join(HASH_PATH, relative_path) + ".hash"

                # Generate hash file if not already
                if not os.path.isfile(hash_path):
                    file = open(hash_path, "w")
                    filehash = md5_file(filepath)
                    file.write(filehash)
                    file.close()

                    result = run([uic_path, filepath], stdout=PIPE, stdin=PIPE, stderr=PIPE, universal_newlines=True)
                    file = open(ui_header_path, "w")
                    file.write(result.stdout)
                    file.close()

                else: # Generate new hash if file has been changed
                    file = open(hash_path, "r+")
                    data = file.read()
                    filehash = md5_file(filepath)

                    # Hashes not equal
                    if not filehash == data:
                        print(f"File {filepath} has changes, generating new hash...")
                        file.seek(0)
                        file.write(filehash)
                        file.truncate()
                        file.close()

                        result = run([uic_path, filepath], stdout=PIPE, stdin=PIPE, stderr=PIPE, universal_newlines=True)
                        file = open(ui_header_path, "w")
                        file.write(result.stdout)
                        file.close()