/*input: call me at 10 p.m
2
1
output: ecnn og cv 21 r.o
*/


#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    char s[100],fin[100];
    int a,b;
    scanf("%[^\n]\n",s);
    scanf("%d\n%d",&a,&b);
    int l=strlen(s),k=0;
    for(int i=0;i<l;i++){
        char c=s[i];
        if(isalpha(c)){
            char r=c+a;
            if(r>122){
                int h=r-122;
                int fin=h+96;
                printf("%c",(char)fin);
            }else{
                printf("%c",(char)r);
            }
        }else if(isdigit(c)){
            int m=(c-'0')+b;
            printf("%d",m);
        }else{
            printf(" ");
        }
    }
}