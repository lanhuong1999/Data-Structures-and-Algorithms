#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int>ii;
int main()
{
    vector<ii>p;
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
            if(a>i) p.push_back({i,a});
        }
    }
    for(int i=0;i<p.size();i++)
        cout<<p[i].first<<" "<<p[i].second<<endl;
    return 0;
}
