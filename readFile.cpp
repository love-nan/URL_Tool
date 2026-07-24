#include <fstream>
#include <string>
#include <vector> //动态数组
#include <iostream>

using namespace std;

string file_path_input() {
	cout << "请输入文件路径：";
	string path;
	cin >> path;
	return path;
}

vector<string>readFile(string path) {
	vector<string>domainList;
	ifstream file(path);  //用一个file，相当于python中as f的写法
	if (!file.is_open()) {
		cout << "文件打开失败！请重试" << endl;
		return domainList;
	}

	string url_line;
	while (getline(file,url_line)) {
		if (url_line.empty()) {
			continue;
		}
		if (url_line.substr(0, 7) != "http://" && url_line.substr(0, 8) != "https://"){
				url_line = "https://" + url_line;
		}
			
		domainList.push_back(url_line);
	}
	file.close();
	return domainList;
}
