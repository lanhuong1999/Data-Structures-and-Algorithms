#include <bits/stdc++.h>

using namespace std;
int v[1005][1005];
int main()
{
    int n; cin>>n;
    cin.ignore();
    for(int i=1;i<=n;i++){
        string s; getline(cin,s);
        for(int j=0;j<s.length();j++){
            int a=0;
            while(isdigit(s[j])){
                a=a*10+(s[j]-'0');
                j++;
            }
            v[i][a]=1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
