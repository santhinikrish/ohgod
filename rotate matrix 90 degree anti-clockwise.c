/*input: 2 3
4 5 9 
1 3 5
ouput: 
9 5
5 3
4 1*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d\n%d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d ",&a[i][j]);
        }
    }
    for(int i=m-1;i>=0;i--){
        for(int j=0;j<n;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}