# C++ 项目概览

## 项目类型
这是一个使用 Microsoft Visual Studio 2022 创建的 C++ 控制台应用程序项目。

## 主要技术
- **语言标准**: C++20 (stdcpp20)
- **编译器**: MSVC (Microsoft Visual C++) v14.5
- **平台**: Windows (Win32 和 x64)
- **字符集**: Unicode
- **项目类型**: 控制台应用程序

## 项目结构

### 源文件
- `cpp.cpp` - 主源文件（当前为空文件）

### 配置文件
- `cpp.vcxproj` - Visual Studio 项目文件
- `cpp.vcxproj.filters` - 项目过滤器配置
- `cpp.vcxproj.user` - 用户特定的项目设置
- `cpp.slnx` - Visual Studio 解决方案文件（新格式）

### 构建输出
- `x64/Debug/cpp.exe` - Debug 版本的可执行文件
- `x64/Debug/cpp.pdb` - 调试符号文件

## 构建配置

### 支持的配置
- **Debug | Win32**
- **Release | Win32**
- **Debug | x64**
- **Release | x64**

### 编译选项
- 警告级别: Level3
- SDL 检查: 启用
- 一致性模式: 启用
- Release 配置额外选项:
  - 函数级链接
  - 内联函数优化
  - 全程序优化

## 构建和运行

### 使用 Visual Studio
1. 打开 `cpp.slnx` 解决方案文件
2. 选择目标配置（Debug/Release）和平台（x64/Win32）
3. 按 `F5` 开始调试或 `Ctrl+F5` 运行

### 使用 MSBuild 命令行
```powershell
# 构建 Debug x64 版本
msbuild cpp.vcxproj /p:Configuration=Debug /p:Platform=x64

# 构建 Release x64 版本
msbuild cpp.vcxproj /p:Configuration=Release /p:Platform=x64

# 清理项目
msbuild cpp.vcxproj /t:Clean
```

### 运行可执行文件
```powershell
# 运行 Debug 版本
.\x64\Debug\cpp.exe

# 运行 Release 版本
.\x64\Release\cpp.exe
```

## 开发约定

### 代码风格
- 使用 C++20 标准特性
- 遵循 MSVC 编译器的最佳实践
- 启用一致性模式以确保代码标准符合性

### 文件组织
- 源文件放在"源文件"过滤器下
- 头文件放在"头文件"过滤器下
- 资源文件放在"资源文件"过滤器下

### 调试
- Debug 配置生成完整的调试信息
- 使用 `.pdb` 文件进行符号调试
- 可使用 Visual Studio 调试器或 WinDbg

## 注意事项
- 当前 `cpp.cpp` 文件为空，需要添加实际的 C++ 代码
- 项目已配置为使用 C++20 标准，可以使用现代 C++ 特性
- 建议在 x64 平台上开发和测试以获得更好的性能