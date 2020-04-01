#include <bits/stdc++.h>
#define maxn 100
using namespace std;
void chuanHoa(char a[]){
    char ho[100]="";
    char ten[100]="";
    char *p=strtok(a," ");
    p[0]-=32;
    strcat(ho,p);
    p=strtok(NULL," ");
    while(p!=NULL){
        p[0]-=32;
        strcat(ten,p);
        strcat(ten," ");
        p=strtok(NULL," ");
    }
    ten[strlen(ten)-1]='\0';
    cout<<ten<<", "<<ho<<endl;
}
int main()
{
    int t; cin>>t;
    fflush(stdin);
    while(t--){
        char a[maxn];
        gets(a);
        strlwr(a);
        chuanHoa(a);
    }
    return 0;
}
