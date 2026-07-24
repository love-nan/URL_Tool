#include "getURL.h"
#include <iostream>
#include <string>

using namespace std;

//直接处理输入的url
string getInputUrl(){
	cout << "请输入URL：";
	string url;
	cin >> url;
	if (url.substr(0, 7) != "http://" && url.substr(0, 8) != "https://")
	{
		cout << "输入的不是合法的URL" << endl;
		url = "https://" + url;
	}
	return url;
}
