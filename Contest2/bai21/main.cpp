#include <bits/stdc++.h>
#define maxn 20
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        char a[maxn];
        cin>>a;
        do{
            cout<<a<<" ";
        }while(next_permutation(a,a+strlen(a)));
        cout<<endl;
    }
    return 0;
}
