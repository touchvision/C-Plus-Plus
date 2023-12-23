#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    vector<string> *v1 = new vector<string>;
    vector<string> *v2 = new vector<string>;
    
    v1->push_back("GetIoT.tech ");
    v1->push_back("C++ STL");
    v2->push_back("touch ");
    v2->push_back("vision");
    cout << v1->at(0) << " " << v1->at(1) << endl;
    cout << v2->at(0) << " " << v2->at(1) << endl;
    v1->swap(*v2);
    cout << v1->at(0) << " " << v1->at(1) << endl;
    cout << v2->at(0) << " " << v2->at(1) << endl;

    //cout << v1->at(0) << endl;
	//cout << v1->at(1) << endl;
	//cout << v1->size() << endl;
	//cout << v1->capacity() << endl;
	//cout << *(v1->data() + 1) << endl;
	//string &v2 = v1->front() ;
	//cout << v2 << endl;
	//string &v3 = v1->back();
	//cout << v3 << endl;
	//v1->pop_back();
	
	//string &v4= v1->back();
	//cout << v4 << endl;
		
    //for (vector<string>::iterator itr=v1->begin(); itr!=v1->end(); ++itr)
    //    cout<< *itr << endl;
    
    return 0; 
}
