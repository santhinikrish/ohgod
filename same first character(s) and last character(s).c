/*input: 3
apple arrange Abstractable
output: YES
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    int n,k=0,m=0;
    scanf("%d\n",&n);
    char a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%s\n",s);
        for(int j=0;j<strlen(s);j++){
            if(j==0){
                a[k++]=s[j];
            }
            if(j==strlen(s)-1){
                b[m++]=s[j];
            }
        }
    }
    int c1=0,c2=0;
    for(int i=0;i<k;i++){
        if(tolower(a[0])==tolower(a[i])){
            c1+=0;
        }else{
            c1+=1;
        }
    }
    for(int i=0;i<m;i++){
        if(tolower(b[0])==tolower(b[i])){
            c2+=0;
        }else{
            c2+=1;
        }
    }
    if(c1==0 && c2==0){
        printf("YES");
    }else{
        printf("NO");
    }
}
