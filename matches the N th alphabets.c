/*input: orasge 4
output: YES
input: zebreas 5
output: NO
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
    char a,a1,s[100];
    int n;
    scanf("%s %d",s,&n);
    for(int i=0;i<strlen(s);i++){
        a=s[0];
        int j=0;
        while(j<n){
            if(a=='z'){
                a='a';
                j=j+1;
            }else if(a=='z' && j!=n){
                a='a';
                j=j+2;
            }
            a++;
            j++;
        }
        a1=a;
        if(s[n-1]==a1){
            printf("YES");
            return 0;
        }else{
            printf("NO");
            return 0;
        }
    }
}
