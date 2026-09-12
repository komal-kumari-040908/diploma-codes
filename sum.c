#include<stdio.h>
int main(){
    int arr[4];
    int i,sum=0;
    printf("enter array elements:");
    for(i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<4;i++){
        sum=sum+arr[i];
    }
    printf("sum=%d\n",sum);
    return 0;
}
