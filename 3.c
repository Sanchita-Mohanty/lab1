#include<stdio.h>
int sum(int m){
    if(m==1){
        return 1;
    }
    else if(m==0){
        return 0;
    }
    return (m+sum(m-1));
}
int main(){
    int m,ans;
    printf("enter the number you want to find sum of");
    scanf("%d",&m);
    ans=sum(m);
    printf("%d",ans);
}