#include<stdio.h>
int main()
{
    int count=0;
    char a[50]="i am pilot";
    int i=strlen(a);
    int j;
    for(j=0;j<i;j++){
        if(a[j]==' '){
           printf("\n");
        }
        else{
            printf("%c",a[j]);
        }
    }
    printf("\n\n");

    return 0;
}
