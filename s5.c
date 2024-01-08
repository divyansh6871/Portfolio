#include<stdio.h>
 
int main()
{
    char c='a';
    char *d=&c;
  printf("%d\n",sizeof(d));

  int arr[5] = { 1, 2, 3, 4, 5 };
  int *a=arr;
//   printf("%d\n",sizeof(a));
  int (*ptr)[5] = &arr;
 
  printf("%d\n", (*ptr)[1]);
//   printf("%d\n",sizeof(ptr));
//   printf("%d",sizeof(*ptr));
  return 0;
}