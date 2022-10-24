#include <iostream>
using namespace std; 

struct node{
    int data; 
    struct node *link;
};
typedef struct node nd; 

class llist{
    nd *first,*rear;
    int ll_len; 
    public: 
        llist():first(NULL),rear(NULL),ll_len(0){}; 
        ~llist(); 
        llist(llist & nd); 
        void insert_front(); 
        void insert_rear(); 
        void delete_front(); 
        void delete_rear(); 
        void ins_at_pos(); 
        void del_at_pos();
        void display() const;  
};

llist::~llist(){
    rear = NULL; 
    nd *t = first;
    while(first){
        t = first->link;
        delete first; 
        first = t; 
    } 
    // cout<<"destructor"<<endl;
}

void llist::insert_front(){
    nd *t = new nd; 
    t->link = 0; 
    cout<<"Enter the data: "; 
    cin>>t->data; 
    if(first == NULL){
        first = t; 
        rear = t; 
    }else{
        t->link = first; 
        first = t; 
    }
    ll_len++; 
}

void llist::delete_front(){
    if(first == NULL){
        cout<<"The list is empty"<<endl;
        return;
    }
    cout<<"The data to be deleted is: "<<first->data<<endl; 
    nd *t = first->link; 
    if(t == 0){
        rear = NULL; 
        delete first; 
        first = NULL; 
    }else{
        delete first; 
        first = t; 
    }
    ll_len--; 
}

void llist::insert_rear(){
    nd *t = new nd; 
    t->link = 0; 
    cout<<"Enter the data: "; 
    cin>>t->data; 
    if(first == NULL){
        first = t; 
        rear = t; 
    }else{
        rear->link = t; 
        rear = t; 
    }
    ll_len++; 
}

void llist::delete_rear(){
    if(first == NULL){
        cout<<"The list is empty"<<endl;
        return;
    }
    cout<<"The data to be deleted is: "<<rear->data<<endl; 
    nd *t = first->link; 
    if(t == 0){
        rear = NULL; 
        delete first; 
        first = NULL; 
    }else{
        t = first; 
        while((t->link)->link != 0){
            t = t->link;
        }
        delete t->link;
        t->link = 0;  
        rear = t; 
    }
    ll_len--; 
}

void llist::display() const{
    if(first == NULL){
        cout<<"ll is empty\n"; 
        return;
    }
    cout<<endl;
    for(node *t = first; t != NULL; t = t->link)
        cout<<t->data<<endl;
    cout<<endl;
}

void llist::ins_at_pos() {
    int pos; 
    cout<<"Enter the position: "; 
    cin>>pos; 
    if(pos < 1 || pos > ll_len+1)
    {
        cout<<"Cannot insert at the given position"<<endl;
        return;
    }

    nd *new_nd = new nd;
    cout<<"Enter the data: "; 
    cin>>new_nd->data; 
    new_nd->link = 0; 

    if(pos == 1 && first == NULL && rear == NULL){
        first = new_nd; 
        rear = new_nd; 
        return;
    }

    if(pos== 1 && first!=NULL){
        new_nd->link = first; 
        first = new_nd; 
        return;
    }

    if(pos == ll_len+1 && rear != NULL)
    {
        rear->link = new_nd; 
        rear = new_nd; 
        return;
    }

    nd *t = first; 
    while(pos-2){
        t = t->link;
        pos--; 
    }
    new_nd->link = t->link; 
    t->link = new_nd; 
    ll_len++; 
}

void llist::del_at_pos() {
    int pos; 
    cout<<"Enter the position: "; 
    cin>>pos; 
    if(pos < 1 || pos > ll_len+1)
    {
        cout<<"Cannot insert at the given position"<<endl;
        return;
    }

    nd *del_nd = new nd;
    // cout<<"Enter the data: "; 
    // cin>>del_nd->data; 
    // del_nd->link = 0; 

    if(pos == 1 && first == NULL && rear == NULL){
        cout<<"LL is empty\n";  
        return;
    }

    if(pos == 1 && first == rear){
        cout<<"Content to be deleted is: "<<first->data<<endl;
        delete first; 
        first = NULL; 
        rear = NULL; 
    }

    if(pos== 1 && first!=rear){
        del_nd = first;
        first = first->link;
        cout<<"Content to be deleted is: "<<del_nd->data<<endl;
        delete del_nd; 
        return;
    }

    if(pos == ll_len+1 && rear != NULL)
    {
        del_nd = first; 
        while((del_nd->link)->link != NULL){
            del_nd = del_nd->link;
        }
        cout<<"Content to be deleted is: "<<(del_nd->link)->data<<endl;
        delete del_nd->link;
        del_nd->link = 0; 
        rear = del_nd; 
        return;
    }

    nd *t = first,*nxt = NULL; 
    while(pos-2){
        t = t->link;
        pos--; 
    }
    del_nd = t->link;
    cout<<"Content to be deleted is: "<<del_nd->data<<endl;
    nxt = del_nd->link;
    t->link = nxt;
    delete del_nd;  
    ll_len--; 
}

int main(){
    int ch; 
    llist obj;
    while(1){
        cout<<"Enter your choice: "; 
        cin>>ch; 
        switch(ch){
            case 1:obj.insert_front(); break; 
            case 2:obj.insert_rear(); break; 
            case 3:obj.delete_front(); break; 
            case 4:obj.delete_rear(); break; 
            case 5:obj.ins_at_pos(); break;
            case 6:obj.del_at_pos(); break;
            case 7:obj.display(); break; 
            case 8:obj.~llist(); exit(0); 
        }
    }
    return 0; 
}