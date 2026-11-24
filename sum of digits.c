#include<stdio.h>
int main(){
    
    int a,x,y,z;
    
    printf("enter a four digit number-");
    scanf("%d\n",&a);
    
    if(a>999){
        x= a/1000;
        a=a%1000;
        y=a/100;
        a=a%100;
        z=a/10;
        a=a%10;
        printf("sum of the numbers is %d\n", x+y+z+a);
    }
    else{
        printf("please enter four digit number...");
    }

return 0;

}