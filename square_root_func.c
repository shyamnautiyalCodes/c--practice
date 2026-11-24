#include<stdio.h>
void square(int x);

int main(){
    int num=5;
    square(num);
    printf("number=%d\n", num); 
    return 0;
}

void square(int x){
    x = x*x ;
    printf("square = %d\n", x  );
}