/*input: 30 45
output: 75 (LCM=90 HCF=15 90-15=75)
*/

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    int a,b;
    cin>>a>>b;
    int gcd,lcm;
    for(int i=1;i<=a||i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    lcm=(a*b)/gcd;
    cout<<(lcm-gcd);
}
