#include<stdio.h>
int main() {
    int a,b,c;
    printf("enter the sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c && c==a){
        printf("equilateral triangle");
    }
    else if(a==b || b==c || c==a){
        printf("isosceles triangle");
    }
    else if(a+b>c){
        printf("scalene triangle");
    }
    else{
        printf("Not a valid triangle please try again....");
    }
}