/*input: 
midinadiazne
3
output:
madeinindiaz
expla:
m i d
a n i
d i a
e n z
*/


#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    string s;
    getline(cin,s);
    int n;
    cin>>n;
    int l=s.length()/n;
    int i,j,k=0;
    char a[l][n];
    for(i=0;i<l;i++){
        if(i%2==0){
            for(j=0;j<n;j++){
                a[i][j]=s.at(k);
                k++;
            }
        }
        else{
            for(j=n-1;j>=0;j--){
                a[i][j]=s.at(k);
                k++;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            cout<<a[j][i];
        }
    }
}
