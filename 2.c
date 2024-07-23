#include<stdio.h>
void printn(int n){
    if(n==1){
        printf("1");
    }
    else{
        printf("%d",n);
        printn(n-1);
    }
}
int main(){
    int k;
    printf("enter the number you want to print");
    scanf("%d",&k);
    printn(k);
}