#include<stdio.h>
int * retarr(int n){
    int arr[n];
    printf("\n%d\n",arr); 
    int *ptr=arr;
    printf("Enter array element :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n%d\n",ptr);
    return ptr;
    
}
int main ()
{
    int n=4;
    int *ptr;
    ptr=retarr(n);
    printf("%d",ptr);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",*(ptr+i));
    }
    
    return 0;
}