#include <iostream>
using namespace std; 

int main(){
    unsigned int a,b,c; 
    cout<<sizeof(unsigned int)<<endl;
    cout<<"Enter value of a\n"; 
    cin>>a; 
    cout<<"Enter value of b\n"; 
    cin>>b; 
    c = a+b; 
    cout<<a<<"+"<<b<<"="<<c; 
    return 0; 
}