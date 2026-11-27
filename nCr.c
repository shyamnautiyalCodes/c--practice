#include<stdio.h>
int combination (int n,int r){
    int nfact=1; // n!
    int rfact=1; // r1
    int nrfact=1 ; // (n-r)!
    for(int i=2;i<=n;i++){
        nfact = nfact * i;
    }
    for(int j=2;j<=r;j++){ 
        rfact = rfact * j;
    }
   for(int k=2;k<=(n-r);k++){
        nrfact = nrfact * k;
    }
    int nCr = nfact/(rfact*nrfact);
    printf ("%d",nCr);

    return 0;

}
int main(){
    int a;
    printf("enter n = ");
    scanf("%d",&a);
    int b; 
    printf("enter r = ");
    scanf("%d",&b);
    combination(a,b);
    return 0 ;
}