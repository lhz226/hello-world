#include<stdio.h>
char* StrCpy(char* src)
{
    char* dest = (char*)malloc(strlen(src) + 1);
    for (int i = 0; i < strlen(src); i++)
    {
        dest[i] = src[i];
    }
    return dest;
}
int main()
{

}
