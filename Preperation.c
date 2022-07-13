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

    int i,j,a[10][10];
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            a[i][j] = 7;
        }
    }
    printf("%d\n", a[5][5]);
    return 0;
}