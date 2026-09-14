#include<stdio.h>
int main(){
    int i,pos,n;
    int arr[20];
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter position of deletion:");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
