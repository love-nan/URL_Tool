#include <iostream>//输入输入头文件
#include <vector> //动态数组

#include "getURL.h"
#include "dealURL.h"
#include "readFile.h"


using namespace std;

int main() {
	cout <<"---URL存活检测---" << endl;
	while (true) {
		cout << "请选择访问模式（输入数字）：1：批量访问、2：单条访问、3：退出"<<endl;
		int a;
		cin >> a;

		if (a == 1) {
			string path = file_path_input();
			vector <string>allDomains = readFile(path);
			for (string url_list:allDomains) {
				int statusCode = dealResult(url_list);
				cout << url_list << endl;
				cout << "状态码：" << statusCode << endl;
			}
		}

		else if (a == 2) {
			string url = getInputUrl();
			cout << "The URL is:" << url << endl;
			int statusCode = dealResult(url);
			cout << statusCode << endl;
		}
	}
	
}


