/*input: 
0 0
0 -2
2 0
0 2
output: yes
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int a1,a2,b1,b2,c1,c2,d1,d2;
    cin>>a1>>a2>>b1>>b2>>c1>>c2>>d1>>d2;
    int f=0,s=0;
    if((((b1<=a1 && b2<=c1)||(b1>=c1 && b1>=a1))&&((b2<=a2 && b2<=c2)||(b2>=a2 && b2>=c2)))&&(((d1<=a1&& d1<=c1)||(d1>=c1 && d1>=a1))&&((d2<=a2 && d2<= c2)||(d2>=a2 && d2>=c2)))){
        s=1;
    }
    if((((a1<=b1 && a1<=d1)||(a1>=b1 && a1>=d1))&&((a2<=b2&& a2<=d2)||(a2>=b2 && a2>=d2)))&&(((c1<=b1&&c1<=d1)||(c1>=b1 && c1>=d1))&&((c2<=b2 && b2<=d2)||(c2>=b2&& c2>=d2)))){
        f=1;
    }
    if(f==1 && s==1){
        cout<<"no";
    }else{
        cout<<"yes";
    }
}