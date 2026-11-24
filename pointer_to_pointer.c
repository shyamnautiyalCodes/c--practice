#include<stdio.h>
int main(){
    float price=1200.55;
    float *ptr= &price;
    float **pptr= &ptr;

    printf("value is %f", **pptr);
    return 0;
}