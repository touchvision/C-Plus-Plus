#include <iostream>
#include <deque>
#include <string>

using namespace std;

template <typename T>
void display_element(T &res) 
{
    for(auto i = res.begin(); i != res.end(); i++)
        cout << *i << endl;

}
int main(void)
{
    deque<string> d;
    d.emplace_back("lcc");
    d.push_back("GetIoT.tech ");
    d.push_back("C++ STL");
    d.push_front("Miivii");
    //d.pop_back();
    //d.pop_front();
    //string &str = d.front();
    //str.insert(1, "LCC", 3);
    //cout << *(str.data()) << endl;
    //cout << str.size() << endl;
    
    display_element<std::deque<std::string>>(d);
    return 0; 
}
