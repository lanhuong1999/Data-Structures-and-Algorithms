#include<bits/stdc++.h>
using namespace std;
int a[106], l[106] , b[106], l1[106];
void solve(){
    int i,j,n;
	cin >> n;
    int m=n-1;
	for(i=0; i<n; i++){
		cin >> a[i];
        b[m]=a[i];
        m--;
	}
    memset(l,0,sizeof(l));
    memset(l1,0,sizeof(l1));
	l[0]=a[0];
    l1[0]=b[0];
	int lmax,l1max;
	for(i=0; i<n; i++){
		lmax=0;
        l1max=0;
		for(j=0; j<i; j++){
			if(a[i] > a[j]){
				if(l[j] > lmax){
					lmax=l[j];
				}
			}
            if(b[i] > b[j]){
				if(l1[j] > l1max){
					l1max=l1[j];
				}
			}
		}
		l[i]=lmax+a[i];
        l1[i]=l1max+b[i];
	}
    int Max= INT_MIN;
    m=n-1;
    for(i=0; i<n; i++){
        cout << l[i]<<" ";
        if(l[i]+l1[m]-a[i]>Max) Max = l[i]+l1[m]-a[i];
        m--;
	}
    cout << endl;
    m=n;
    for(int i=m-1;i>=0;--i){
        cout << l1[i]<<" ";
    }
    cout << endl;
	cout << Max <<endl;
}
int main(){
    freopen("input.txt","r",stdin);
	int t;
    cin >> t;
    while(t--) solve();
	return 0;
}

