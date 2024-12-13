# SOGEQtE

This repository contains source code of SOGE game engine editor.

# Building

To build editor you need to have Qt6 **6.5.3** or later installed on your computer. After instalation provide path to Qt6 root directory to the variable `qt_path` located in `premake5.lua` file.

```lua
local qt_path = "A:/DevTools/Qt/6.5.3/msvc2019_64"
```

Then just run `GenerateProject.bat` in the root of the project.