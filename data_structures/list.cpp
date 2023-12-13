#include <iostream>
#include <deque>
#include <list>

using namespace std;

int main(void)
{
    list<string> list1;

    list1.push_back("GetIoT.tech ");
    list1.push_back("C++ STL");
    list1.reverse();

    for (auto i = list1.begin(); i != list1.end(); i++) {
        cout  << *i << endl;
    }
    return 0; 
}
