/*input: 5
afgha kabul
austria vienna
armenia yerevan
chile santiago
croatia zagreb
austria

output: vienna
*/
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    int n,i=0;
    cin>>n;
    char a[n][100],b[n][100],s[100];
    for(int i=0;i<n;i++){
        scanf("%s %s\n",a[i],b[i]);
    }
    int p=0;
    scanf("%s",s);
    for(int j=0;j<n;j++){
        if(strcmp(a[j],s)==0){
            cout<<b[j];
            p=1;
            break;
        }
    }
    if(p==0){
        cout<<"NONE";
    }
}

	(or)


#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    char a[n][100],b[n][100],s[100];
    for(int i=0;i<n;i++){
        scanf("%s %s\n",a[i],b[i]);
    }
    int j,p=0;
    scanf("%s",s);
    for(j=0;j<n;j++){
        if(strcmp(a[j],s)==0){
            p=1;
            break;
        }
    }
    if(p==1){
        cout<<b[j];
    }else{
        cout<<"NONE";
    }
}
