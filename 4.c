//array sum
#include<stdio.h>
int sum(int arr[],int k){
    if(k==1){
        return arr[0];
    }
    return (arr[k-1]+sum(arr,k-1));
}
int main(){
    int k,m;
    printf("  enter length of  array");
    scanf("%d",&k);
    int arr[k];
    printf(" enter numbers  in  array");
    for(int i=0;i<k;i++){
        scanf("%d",&arr[i]);
    }
    m=sum(arr,k);
    printf("%d",m);
}