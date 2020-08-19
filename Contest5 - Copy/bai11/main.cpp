#include <bits/stdc++.h>
using namespace std;
string c[105];
string addNum(string a, string b){
    while(a.length()<b.length())a='0'+a;
    while(a.length()>b.length())b='0'+b;
    string res="";
    int n=a.length();
    int carry=0;
    for(int i=n-1;i>=0;i--){
        int t=(int)(a[i]-'0')+(int)(b[i]-'0')+carry;
        carry=t/10;
        t=t%10;
        res=(char)(t+'0')+res;
    }
    if(carry>0) res=(char)(carry+'0')+res;
    return res;
}
string mulNum(string s1, string s2){
    vector<int>a,b;
    for(int i=0;i<s1.length();i++) a.push_back(s1[i]-'0');
    for(int i=0;i<s2.length();i++) b.push_back(s2[i]-'0');

    int l=s1.length()+s2.length();
    vector< vector<int> > m(l);
    int index=0,carry=0;
    for(int i=s2.length()-1;i>=0;i--){
        int t=0;
        while(t<index){
            m[index].push_back(0);
            t++;
        }
        carry=0;
        for(int j=s1.length()-1;j>=0;j--){
            int temp=a[j]*b[i]+carry;
            m[index].push_back(temp%10);
            carry=temp/10;
        }
        if(carry>0) m[index].push_back(carry);
        while(m[index].size()<l) m[index].push_back(0);
        reverse(m[index].begin(),m[index].end());
        index++;
    }
    carry=0;
    string res="";
    for(int j=l-1;j>=0;j--){
        int temp=carry;
        for(int i=0;i<s2.length();i++)
            temp+=m[i][j];
        res=(char)(temp%10+'0')+res;
        carry=temp/10;
    }
    if(carry>0) res=(char)(carry+'0')+res;
    while(res[0]=='0') res.erase(res.begin());
    return res;
}
void init(){
    c[0]=c[1]="1";
    for(int i=2;i<=100;i++){
        c[i]="";
        for(int j=0;j<i;j++){
            string temp=mulNum(c[j],c[i-j-1]);
            c[i]=addNum(c[i],temp);
        }
    }
}
int main()
{
    init();
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<c[n]<<endl;
    }
    return 0;
}
