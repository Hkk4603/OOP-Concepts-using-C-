#include <bits/stdc++.h>

using namespace std; 

void add(int a, int b, int* c){
    *c = a+b; 
}

int main(){
    int a = 10, b = 20;
    int c; 
    add(a,b,&c);  
    cout<<c<<endl;
    return 0; 
}