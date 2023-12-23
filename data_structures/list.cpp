#include <iostream>
#include <deque>
#include <list>

using namespace std;

template <typename T> 
void display_element(T &list) 
{
    for(auto i = list.begin(); i != list.end(); i++) {
        cout << *i << endl;
    }
}
int main(void)
{
    list<string> list1;

    list1.push_front("lcc ");
    list1.push_back("GetIoT.tech ");
    list1.push_back("C++ STL");
    if(list1.find("lcc"))
        cout << "find lcc in list " << endl;     
    display_element<list<string>>(list1);
    list1.sort();
    display_element<list<string>>(list1);
    list1.reverse();
    display_element<list<string>>(list1);
    return 0; 
}
