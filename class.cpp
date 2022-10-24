//TO BE CONTINUED

#include <iostream>
#include <stdlib.h>

using namespace std; 

class complex{
    int i,r; 
    public: 
            void accept(); 
            void display() const; 
            complex add(const complex &) const; 
            void assign(); 
};

void complex::accept(){
    cout<<"Enter the values of r and i: "<<endl;
    cin>>r>>i; 
    //or cin>>this->r>>this->i; 
}

void complex::display() const{
    cout<<r<<" + i"<<i<<endl;
}

void complex::assign(){

}

complex complex::add(const complex & p) const{
    complex res; 
    
}

int main()
{
    complex c1; 
    c1.accept(); 
    c1.display();
    return 0; 
}