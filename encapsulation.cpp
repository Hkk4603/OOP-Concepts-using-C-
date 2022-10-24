#include <iostream>
using namespace std;

struct encap{
    int i; 
    int func(){
        return i+1; 
    }
}; 

int main()
{
    int i = 0; 
    encap *pe = new encap [3]; 
    //cout<<pe->func()<<endl;
    for(i = 0; i < 3; i++)
        pe[i].i = i; 
    // pe->i = 10; 
    // cout<<pe->i<<" "<<pe->func()<<endl; 
    for(i = 0; i < 3; i++)
        cout<<pe[i].i<<" "<<pe[i].func()<<endl;
    
    free(pe); 
    return 0; 
}