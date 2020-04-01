#include <iostream>

using namespace std;
int res[60000],ans[60000],l;

int tim(int n){
    for(int i=0;i<l;i++)
        if(n==res[i]) return i;
    return -1;
}
bool checkPrime(int n){
    while(n!=0){
        int a=n%10;
        if(a!=2 && a!=3 && a!=5 && a!=7) return false;
        n/=10;
    }
    return true;
}
int main()
{
    int n;
    while(cin>>n){
        if(checkPrime(n)){
            int vt=tim(n);
            if(vt==-1){
                res[l]=n; ans[l]=1; l++;
            }else{
                ans[vt]++;
            }

        }
    }
    for(int i=0;i<l;i++)
        cout<<res[i]<<" "<<ans[i]<<endl;
}
