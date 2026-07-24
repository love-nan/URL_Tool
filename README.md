# URL_Tool
A simple URL availability detection tool written in C++ console application, developed for personal C++ network programming learning.

## Features
1. Console menu selection: Single URL detection / Batch URL scanning by reading URLs from local text files
2. Built-in URL format validity verification
3. Send HTTP requests via WinHTTP and obtain website response status codes
4. Write all access records to local log files for review

## Build & Runtime Environment
- OS: Windows
- IDE: Visual Studio 2022
- Dependency: WinHTTP (Built-in on Windows, no extra installation required)

## Compilation Instructions
1. Create an empty C++ Console Project in Visual Studio
2. Add all `.cpp` source files and `.h` header files to your project
3. Right-click project → Properties → Linker → Input, add `winhttp.lib` to Additional Dependencies
4. Build the solution and run the program

## Open Source License
This project is licensed under the MIT License.

## Disclaimer
1. The open-source version is only for learning and researching C++ network programming. It is not designed as a network scanning or penetration testing tool.
2. You are only permitted to use this tool on websites and servers that you fully own and have obtained official authorization to test.
3. It is strictly prohibited to use this program to perform unauthorized bulk access, stress testing, security scanning on any websites, which violates Cybersecurity Laws.
4. Any illegal abuse and consequent legal liabilities shall be borne solely by the end user. The author shall not be held legally responsible.
5. The enhanced commercial version developed in the future will be closed-source and not subject to the rules of this open-source edition.

---

# 中文介绍
## 项目简介
基于C++控制台开发的简易URL存活探测工具，个人网络编程学习练手作品

## 功能列表
1. 菜单交互：单条网址检测、批量读取文本内网址批量探测
2. 校验URL格式是否合法
3. 调用WinHTTP库发起网页请求，获取站点状态码
4. 所有访问结果自动写入本地日志文件留存

## 编译环境
系统：Windows
开发软件：Visual Studio 2022
依赖：WinHTTP（Windows系统自带，无需额外安装）

## 编译步骤
1. VS新建空白C++控制台项目
2. 将仓库内所有.cpp源码、.h头文件添加至项目
3. 项目属性→链接器→输入，附加依赖项填入：winhttp.lib
4. 生成解决方案即可运行

## 开源协议
项目遵循 MIT 开源协议

## 免责声明
1. 本开源版本仅用于C++网络编程学习研究，开发初衷并非网络扫描、渗透类工具；
2. 仅可在本人拥有完整授权的网站资产上进行连通性测试；
3. 严禁使用本程序对任意未授权站点批量访问、压力测试、安全扫描，该行为违反网络安全相关法律法规；
4. 使用者违规滥用产生的一切法律后果，均由使用者自行承担，作者不承担任何连带责任；
5. 后续迭代版本将闭源开发，不受本开源版本约束。
