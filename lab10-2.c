#include<stdio.h>
#include<String.h>

void Delete(char* string, int j)
{
    int i;
    if ((string[j]==' ')&&(string[j+1])==' ')
        Delete(string,j+1);
    for (i = j; i < strlen(string)-1; i++)
    {
        string[i]=string[i+1];
    }
    string[i]=0;

}

int main()
{

    char string[256];
    char *string1;
    printf("string:\n");
    string1=gets(string);
    int i;

    for (i=0;i<strlen(string);i++)
    { if ((string[i]==' ')&&(string[i+1]==' '))
            Delete(string,i+1);
    }
    printf("string result:\n");
    printf("%s\n",string);

    return 0;
}
