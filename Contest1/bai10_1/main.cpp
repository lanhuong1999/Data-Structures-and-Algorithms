#include <bits/stdc++.h>

using namespace std;
void chuanHoa(char a[]){
    char res[100]="";
    char *p=strtok(a," ");
    while(p!=NULL){
        p[0]-=32;
        strcat(res,p);
        strcat(res," ");
        p=strtok(NULL," ");
    }
    cout<<res<<endl;
}
int main()
{
    int t;cin>>t;
    fflush(stdin);
    while(t--){
        char a[100];
        gets(a);
        strlwr(a);
        chuanHoa(a);
    }
    return 0;
}
