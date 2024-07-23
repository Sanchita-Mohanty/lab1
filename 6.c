#include<stdio.h>
int digitsum(int n){
    if(n<10){
        return n;
    }
    return ((n%10)+digitsum(n/10));

}
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int final=digitsum(n);
    printf("%d",final);
}