//reverse
#include<stdio.h>
void reverse(int *arr[],int l ,int m){
    int *temp;
    if(l>=m){
        return;
    }
    temp=arr[m-1];
    arr[m-1]=arr[l];
    arr[l]=temp;
    reverse(arr,l+1,m-1);
}
int main(){
    int k,m,l=0;
    printf("enter the length of array");
    scanf("%d",&k);
    m=k;
    int * arr[k];
    for(int i=0;i<k;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,l,m);
     for(int i=0;i<k;i++){
        printf("%d",arr[i]);
    }


}