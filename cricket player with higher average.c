#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s1[100],s2[100];
    int a[20],b[20];
    int l1,l2,t=0,k=0,l=0;
    scanf("%[^\n]",s1);
    scanf("\n");
    scanf("%[^\n]",s2);
    l1=strlen(s1),l2=strlen(s2);
    for(int i=0;i<=l1;i++){
        if(s1[i]=='-'){
            printf("INVALIDINPUT");
            return 0;
        }else if(isdigit(s1[i])){
            t=t*10+(s1[i]-'0');
        }else if(s1[i]==' '||s1[i]=='\0');{
            a[k++]=t;
            t=0;
        }
    }
    for(int i=0;i<=l2;i++){
        if(s2[i]=='-'){
            printf("INVALIDINPUT");
            return 0;
        }else if(isdigit(s2[i])){
            t=t*10+(s2[i]-'0');
        }else if(s2[i]==' '||s2[i]=='\0'){
            b[l++]=t;
            t=0;
        }
    }
    float avg1,avg2;
    int a1=0,a2=0;
    for(int i=0;i<k;i++){
        if(a[i]>=0){
            a1=a1+a[i];
        }
    }
    for(int i=0;i<l;i++){
        if(b[i]>=0){
            a2=a2+b[i];
        }
    }
    avg1=a1/k;
    avg2=a2/l;
    if(avg1==avg2){
        printf("%d",(a1<a2)?a2:a1);
    }
    else if(avg1>avg2){
        printf("%d",a1);
    }else{
        printf("%d",a2);
    }
}
