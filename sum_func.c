#include<stdio.h>
void sum_digit(int a){
     int x,y,z;
    
    if(a>999 && a<=9999){
        
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
}


int main(){
    int num;
    printf("enter a four digit number-");
    scanf("%d",&num);
    sum_digit(num);
    return 0;
}