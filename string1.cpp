#include <iostream>
#include <string.h>
using namespace std; 

class string1{
    char *s; 
    public: 
        string1():s(NULL){};
        string1(char *p){
            cout<<p<<endl;
            s = new char[strlen(p)+1]; 
            strcpy(s,p); 
        }
        string1 (const string1 &r){
            s = new char[strlen(r.s)+1]; 
            strcpy(s,r.s); 
        }

        // ~string1(){
        //     delete s; 
        // }
        string1 concat(const string1 &) const; 
        void display(); 
        friend void accept(string1 &); 
};

string1 string1::concat(const string1 &r) const
{
    string1 t; 
    t.s = new char[strlen(s)+strlen(r.s)+1]; 
    strcpy(t.s,s); 
    strcat(t.s,r.s);
    return t;
}

void string1::display(){
    cout<<this->s<<endl;
}

void accept(string1 &r){
    char *p = new char[200]; 
    cin>>p; 
    r.s = new char[strlen(p)+1]; 
    strcpy(r.s,p); 
    delete []p; 
}

int main(){
    // char *p = new char[4]; 
    // cin>>p; 
    string1 s1("RNS"); 
    // string1 s1; 
    // accept(s1); 
    string1 s2; 
    accept(s2); 
    string1 s3; 
    s3 = s1.concat(s2); 
    s3.display(); 
    string1 s4(s3); 
    s4.display(); 
    return 0; 
}
