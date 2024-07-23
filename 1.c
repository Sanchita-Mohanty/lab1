//factorial
#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    return (n*factorial(n-1));

}
int main(){
    int n,ans;
    printf("enter the number you want to find factorial of");
    scanf("%d",&n);
    ans=factorial(n);
    printf("%d",ans);
}