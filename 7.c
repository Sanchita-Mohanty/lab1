#include<stdio.h>
int reversedig(int n,int dig){
    if(n<10){
        return n*dig;
    }
    return((n%10)*dig+reversedig(n/10,dig/10));
}
int main(){
    int n,final,k,dig=1;
    printf("enter the digit");
    scanf("%d",&n);
    k=n;
    while(k>=10){
       dig=dig*10;
       k=k/10;
    }
    final=reversedig(n,dig);
    printf("%d",final);
   
}