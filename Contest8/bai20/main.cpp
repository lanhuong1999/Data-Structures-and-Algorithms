#include <bits/stdc++.h>

using namespace std;
typedef map<string,bool>msb;
typedef pair<string,int>psi;
const string base="1238004765";
string left(string s){
    string s1=s;
    s1[0]=s[3];
    s1[1]=s[0];
    s1[2]=s[2];
    s1[3]=s[7];
    s1[4]=s[4];
    s1[5]=s[1];
    s1[6]=s[6];
    s1[7]=s[8];
    s1[8]=s[5];
    s1[9]=s[9];
    return s1;
}
string right(string s){
    string s1=s;
    s1[0]=s[0];
    s1[1]=s[4];
    s1[2]=s[1];
    s1[3]=s[3];
    s1[4]=s[8];
    s1[5]=s[5];
    s1[6]=s[2];
    s1[7]=s[7];
    s1[8]=s[9];
    s1[9]=s[6];
    return s1;
}
int main()
{
    string s;
    for(int i=0;i<10;i++){
        int x; cin>>x;
        s+=(char)(x+'0');
    }
    queue<psi>q;
    q.push({s,0});
    msb m;
    m[s]=true;
    while(!q.empty()){
        psi top=q.front(); q.pop();
        if(top.first==base){
            cout<<top.second;
            break;
        }
        string sl=left(top.first);
        if(m[sl]==false){
            m[sl]=true;
            q.push({sl,top.second+1});
        }
        string sr=right(top.first);
        if(m[sr]==false){
            m[sr]=true;
            q.push({sr,top.second+1});
        }
    }

    return 0;
}
