/*input: s@m%a;files
output: sambacfiles
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[1000];
    char a='a';
    //fgets()
    while(scanf("%s",s)>0){
        for(int i=0;i<strlen(s);i++){
            if((isalpha(s[i])) || (isdigit(s[i]))){
                printf("%c",s[i]);
            }else{
                if(a=='z'){
                    printf("%c",a);
                    a='a';
                }else{
                    printf("%c",a);
                    a++;
                }
            }
        }
        printf(" ");
    }
}