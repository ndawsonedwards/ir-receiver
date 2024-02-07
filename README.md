# ir-receiver
Little FW app to play around with Vishay Semiconductors TSOP38338 (38kHz 45m IR receiver module). Using this project to validate and test out STM32 VS Code Extension


## Getting Started 
 - install STM32 VS Code Extension
 - Download STM32CubeMX, STM32CubeCLT
 - Create or import STM32CubeIDE project via STM32 VS Code Extension
 - Generate project with STM32CubeMX for target. Note Toolchain/IDE must be STM32CubeIDE.

### Getting started - issues
 - On my extension install and auto configuration, vcpkg was not found and build failed. It was donwloaded as a .tar and not extract into directory. Extract and rebuilt
   - path was: AppData\Roaming\Code\User\globalStorage\ms-vscode.vscode-embedded-tools\vcpkg\root\vcpkg-standalone-bundle.tar
 - Build successfully, but not able to flash to target, ninja build system failed due to "[build] 'cmd.exe' is not recognized as an internal or external command,". cmd.exe is in my PATH. Don't know what specific package was required, but a Visual Studio (proper, not Code) install added necessary package.