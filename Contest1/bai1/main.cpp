#include <iostream>

using namespace std;
int timUoc(int a, int b){
    int t;
    while(b>0){
        t=a%b;a=b;b=t;
    }
    return a;
}
int main()
{
    int t; cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int uoc=timUoc(a,b);
        long long boi=(a*b)/uoc;
        cout<<uoc<<" "<<boi<<endl;
    }
    return 0;
}
