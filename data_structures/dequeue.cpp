#include <iostream>
#include <deque>

using namespace std;

int main(void)
{
    deque<string> d;
    
    d.push_back("GetIoT.tech ");
    d.push_back("C++ STL");
    
    for (auto i=d.begin(); i<d.end(); i++) {
        cout  << *i << endl;
    }
    return 0; 
}
