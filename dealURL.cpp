#include "getURL.h"

#define _WIN32_WINNT 0x0601
#include <Windows.h> //Windows系统级底层头文件
#include <wininet.h>//Windows中网络请求
#pragma comment(lib, "wininet.lib")
#include <string>
#include <iostream>

using namespace std;

int dealResult(string url)
{
	HINTERNET hSession = InternetOpenA("tool", INTERNET_OPEN_TYPE_DIRECT, NULL, NULL\
		, 0);//像打开浏览器似的
	HINTERNET hUrl = InternetOpenUrlA(hSession, url.c_str(), NULL, 0, 0, 0);//这两行就是相当于python中的request中get请求

	//if (hUrl == NULL) {

	//}

	//获取状态码
	DWORD statusCode = 0;
	DWORD bufLen = sizeof(statusCode);
	HttpQueryInfoA(
		hUrl,
		HTTP_QUERY_STATUS_CODE | HTTP_QUERY_FLAG_NUMBER,
		&statusCode,
		&bufLen,
		NULL
	);
	//关闭资源
	InternetCloseHandle(hUrl);
	InternetCloseHandle(hSession); 
	return statusCode;
}