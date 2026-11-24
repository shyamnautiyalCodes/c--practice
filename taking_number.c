#include <stdio.h>
int main(){
int a;
printf("enter a no.:");
scanf("%d",&a);
while(a<=999){
    if(a%2==0){
        printf("even");
}
else{
        printf("odd");

}
break;
}

return 0;



}
