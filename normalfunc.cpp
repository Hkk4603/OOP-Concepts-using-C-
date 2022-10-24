#include <iostream>
using namespace std; 

/*CODE SNIPPIT1*/
// typedef struct{
//     char n[30],u[20]; 
//     int m; 
// }stud; 

// void test(stud * x){
//     cout<<x->n<<endl;
// }

// int main(){
//     //THE BELOW LINE OF CODE DOESN'T WORK
//     //test("RNSIT"); //"RNSIT" must be typcaseted
//     test((stud *) "RNSIT");
//     return 0; 
// }

/*CODE SNIPPIT 2*/
// class comp{
//     int r,i; 
//     public: 
//         comp(const comp &p){
//             r = p.r; 
//             i = p.i; 
//         }

//         comp(int x){
//             r = x; 
//         }

//         comp(int x,int y){
//             r = x; i = y; 
//         }

//         void display(){
//             cout<<r<<" "<<i<<endl;
//         }
// };

// void test(comp x){
//     x.display(); 
// }

// int main(){
//     comp c1(12,23);
//     test(10); 
//     test((10,20)); 
//     test({10,20}); //this must be used instead of the above format which uses ( )[comp x = {10,20}]; 
//     test(c1); 
//     return 0; 
// }