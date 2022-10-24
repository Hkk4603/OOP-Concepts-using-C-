#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std; 

typedef unsigned int UI; 
typedef struct{
    char pname[20]; 
    float price; 
    int onhand; 
}inventory; 

inventory *Memory_allocation(UI &); 
void accept(inventory *, const UI &); 
void display(const inventory *, const UI &); 
int compar(const void *, const void *); 

int main()
{
    inventory *ar = NULL; 
    UI n; 
    ar = Memory_allocation(n);
    accept(ar,n); 
    display(ar,n); 
    qsort(ar,n,sizeof(inventory),compar);
    display(ar,n);
    return 0; 
}

inventory *Memory_allocation(UI & n){
    inventory *p; 
    cout<<"Enter the value of n: "; 
    cin>>n; 
    p = new inventory [n]; 
    if(p != NULL)
        return p; 
    exit(1); 
}

void accept(inventory *p,const UI & n){
    int i; 
    for(i = 0; i < n; i++){
        cin>>p[i].pname>>p[i].price>>p[i].onhand; 
    }
}

void display(const inventory *p, const UI & n){
    cout<<"The details of the items in the inventory: "<<endl;
    for(int i = 0; i < n; i++)
        cout<<p[i].pname<<" "<<p[i].price<<" "<<p[i].onhand<<endl;
}

int compar(const void *a,const void *b){
    inventory *x = (inventory *)a; 
    inventory *y = (inventory *)b; 
    return strcmp(x->pname, y->pname); 
}