#include<stdio.h>
int main ()
{
    int data[4]={30,40,0,0};
    printf("%d ",data+1);
    int (*pdata)[4]=&data;
    printf("%d ",*(*pdata+0));
    printf("%d ",(*pdata)[1]);
    printf("%d ",(*pdata)[1]);
    return 0;
}