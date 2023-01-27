#include<stdio.h>
int main(){
    int a[20],i,n,j;
    int b[20];
    printf("enter no of element");
    scanf("%d",&n);
    printf("enter elements of array:-\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("elements of array are:-");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    for(i=(n-1),j=0;i>=0;i--,j++){
       b[j]=a[i];
    }
    printf("\narray after reverse:-");
    for(j=0;j<n;j++){
        printf("%d ",b[j]);
    }
    return 0;
}