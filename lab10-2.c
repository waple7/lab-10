#include<stdio.h>
#include<String.h>

void DelSpace(char* str, int ind)
{
    int i;
    if ((str[ind]==' ')&&(str[ind+1])==' ')
        DelSpace(str,ind+1);
    for (i = ind; i < strlen(str)-1; i++)
    {
        str[i]=str[i+1];
    }
    str[i]=0;

}

int main()
{

    char str[256]="  123412 134312  3242342  ";
    int i;

    for (i=0;i<strlen(str);i++)
    { if ((str[i]==' ')&&(str[i+1]==' '))
            DelSpace(str,i+1);
    }
    printf("%s\n",str);

    return 0;
}