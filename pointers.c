#include<stdio.h>
int main(){
    int age = 22;
    int *ptr= &age;
// address printing
// printf("%p\n", &variable)
    printf("%u", &age);
    printf("%u", &ptr);
    printf("%u" ptr);
    return 0;
}