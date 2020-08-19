#include<bits/stdc++.h>
#define MAX 1005
using namespace std;
int L[MAX][MAX];
int solution(char *X, char *Y, int m, int n){
    memset(L,0,sizeof(L));
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(X[i-1] == Y[j-1]) L[i][j] = L[i-1][j-1]+1;
            else L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }
	return L[m][n];
}

int main(){
    int t; cin>>t;
    while(t--){
        char X[MAX], Y[MAX];
        cin>>X>>Y;
        int m=strlen(X), n=strlen(Y);
        cout<<solution(X, Y, m, n)<<endl;
    }
	return 0;
}
