#include<stdio.h>
void msg(int n);
int main ()
{
    void (*fmsg)()=msg;
    fmsg(10);
    return 0;
}
void msg(int n){
    printf("number is : %d",n);
}