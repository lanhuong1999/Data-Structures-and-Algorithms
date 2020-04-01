#include <bits/stdc++.h>

using namespace std;

string res;

void chuanHoa(char a[]){
    int n=strlen(a);
    for(int i=0;i<n;i++){
        if(a[i]==' '){
            int dem=0;
            int j=i+1;
            while(a[j]==' '&&j<n){
                ++dem; ++j;
            }
            a[j]-=32;
            i+=dem;
        }
        if(a[i]!=' '&&i==0) a[i]-=32;
        if(a[i]==' '&&i>=n-1) break;
        res+=a[i];
    }
}
int main()
{
    int t; cin>>t;
    fflush(stdin);
    while(t--){
        res="";
        char a[100];
        cin.getline(a,sizeof(a));
        strlwr(a);
        chuanHoa(a);
        if(a[0]==' ')res.erase(0,1);

        string temp="";
        for(int i=0;i<res.length();i++){
            if(res[i]==' ') break;
            temp+=res[i];
        }
        res=res.substr(temp.length()+1);
        cout<<res<<", "<<temp<<endl;
    }
    return 0;
}
