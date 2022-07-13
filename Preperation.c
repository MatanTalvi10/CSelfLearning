#include<stdio.h>
#include<string.h>
void print(char c[]){
    c[2] = 'a';
    while (*c != '\0')
    {
        printf("%c\n", *c);
        c++;
    }
    c[2] = 't';
    
}
int main()
{
    char c[20] = "hello";
    print(c);
    printf("%s\n", c);
    return 0;
}