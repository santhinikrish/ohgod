/*input: 2
100
75
output: 2
expla: 5,25
*/


#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int c,r=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int k=2;k<=a[0];k++){
        c=0;
        for(int i=0;i<n;i++){
            if(a[i]%k==0){
                c++;
            }
            if(c==n){
                r++;
            }
        }
    }
    printf("%d",r);
}
