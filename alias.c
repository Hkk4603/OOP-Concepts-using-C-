#include <stdio.h>
#define INT int
#define F float

int main(){
    INT a,b; 
    a = 10; 
    F c = 20.2; 
    printf("Enter number b: "); 
    scanf("%d",&b); 
    printf("a = "); 
    printf("%d\n",a);
    printf("Sum: %d + %d = %d\n",a,b,a+b);  
    printf("Float value c: %f\n",c); 
    return 0; 
}