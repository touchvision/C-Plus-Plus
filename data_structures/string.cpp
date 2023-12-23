#include <iostream>
#include <string>

int main() {
  std::string str1("Hello");
  std::string str2("World");
  std::string str3;

  // 字符串连接
  str3 = str1.append(str2);
  std::cout << "str3: " << str3 << std::endl;

  str3.insert(1, "L");
  str3.insert(1, "LCC", 3);
  // 字符串长度
  std::cout << "Length of str3: " << str3.length() << std::endl;
  std::string::iterator it = str3.begin();
  while(it != str3.end()) {
    std::cout << "str3: " << *it << std::endl;
    it++;
  }

  // 判断字符串是否为空
  std::cout << "Is str3 empty? " << str3.empty() << std::endl;
  std::cout << "Is str1.at(1)? " << str1.at(1) << std::endl;
  if(str1.at(1) == 'e')
    std::cout << "Is str1.at(1) = e" << std::endl;

  // 插入字符
  str3.insert(5, "new");
  std::cout << "After insertion: " << str3 << std::endl;

  // 删除字符
  str3.erase(5, 3);
  std::cout << "After erasion: " << str3 << std::endl;

  // 替换字符
  str3.replace(1, 4, "i");
  std::cout << "After replacement: " << str3 << std::endl;

  // 比较字符串
  std::string str4("Hello World");
  std::cout << "str3.compare(str4): " << str3.compare(str4) << std::endl;
  std::cout << "str3 == str4? " << (str3 == str4) << std::endl;

  return 0;
}

