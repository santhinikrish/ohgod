/*input: apple 2
output: 
ap
pl
e
input: environment 5
output: 
envir
onmen
t


#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    scanf("%s ",s);
    int n;
    scanf("%d",&n);
    int l=strlen(s);
    for(int i=0;i<strlen(s);i+=n){
        for(int j=i;j<i+n;j++){
            if(j==l-1){
                printf("%c",s[j]);
                break;
            }else
            printf("%c",s[j]);
        }
        printf("\n");
    }
}