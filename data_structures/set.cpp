#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(void) 
{
    // 初始化字符串集合
    set<string> fruit {
        "orange", "apple", "mango", "peach", "grape"
    };
    fruit.insert("apple");
    // 查看 set 容器大小
    cout << "Size of set container fruit is : " << fruit.size() << endl;
	set<string>::iterator it = fruit.find("applel");
	cout << fruit.count("applel") << endl;
	if(it != fruit.end())
		cout << *it << endl;
	else {
		cout << "can not find ele" << endl;
	}
    return 0;
}
