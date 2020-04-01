#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n;
ll a[100];
bool isPalindrome(int l, int r){
    if(l>=r) return true;
    if(a[l]==a[r]) isPalindrome(l+1,r-1);
    else return false;

}
int main()
{
    int t; cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        if(isPalindrome(1,n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
