#include <iostream>
using namespace std; 

int main()
{
    int *p = new int; 
    (*p) = 10; 
    cout<<*p<<endl;
    int & r = (*p); 
    cout<<r<<endl;
    delete p; 
    return 0; 
}