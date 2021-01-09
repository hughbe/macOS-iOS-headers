# macOS-iOS-headers
Private and Public Framework headers for macOS and iOS

## Generate Instructions

### Prequisites

### macOS
If you run macOS Big Sur
- Follow the instructions in https://lapcatsoftware.com/articles/bigsur.html and https://www.mbsplugins.de/archive/2020-11-13/Extract_the_system_libraries_o
- `mkdir ~/Desktop/Libraries`
- `dyld_shared_cache_util -extract ~/Desktop/Libraries /System/Library/dyld/dyld_shared_cache_x86_64`

- Execute the following commands from the root of the repository:
```
cd Generate
dotnet run macos
```

### iOS
- Build and run https://github.com/nst/RuntimeBrowser/
- Press `Load All` in `RuntimeBrowser`
- Execute the following commands from the root of the repository:

```
cd Generate
dotnet run ios
```
