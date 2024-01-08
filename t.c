#include <stdio.h>
#include <string.h>
// void removewhite(char *s)
// {
//     while (*s != '\0')
//     {
//         if (*s == ' ')
//         {
//             char *p = s;
//             while (*(p + 1) != '\0')
//             {
//                 *p = *(p + 1);
//                 p++;
//             }
//             *p = '\0';
//             s--;
//         }
//         s++;
//     }
// }

int stringcmp(char str1[],char str2[]){
    int i=0;
    while (*(str1+i)!='\0'||*(str2+i)!=0)
    {
        if (*(str1+i)>*(str2+i))
        {
            return 1;
        }
        else if (*(str1+i)<*(str2+i))
        {
            return -1;
        }
        i++;
    }
    return 0;
}

void strcopy(char str1[],char str2[]){
    int i=0;
    while (str1[i]!='\0')
    {
        i++;
    }
    int j=0;
    while (str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
}

void strreverse(char *st){
    int n=0;
    while (*(st+n)!='\0')
    {
        n++;
    }
    for (int i = 0; i < n/2; i++)
    {
        char temp=*(st+i);
        *(st+i)=*(st+n-i-1);
        *(st+n-i-1)=temp;
    }
    
}

int main()
{
    // char str[30];
    // scanf("%[^\n]s", str);
    // printf("%s", str);
    // printf("\n%d", strlen(str));
    // removewhite(str);
    // printf("\n%s", str);
    char str1[20] = "Divyansh ";
    char str2[20] = "Chauhan";
    // printf("%d",'a'>'A');
    // printf("\n%d", stringcmp(str1, str2));
    strcopy(str1,str2);
    printf("%s",str1);
    printf("\n%d\n",strlen(str1));
    strreverse(str1);

    printf("%s",str1);
    printf("\n%d",strlen(str1));
    return 0;
}