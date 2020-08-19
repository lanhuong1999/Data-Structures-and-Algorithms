#include <bits/stdc++.h>

using namespace std;
int a[100][100];
bool vs[100][100];
int n;
vector <string> vt;
string res="";
void Try(int i,int j){
    if(a[1][1]==0 || a[n][n]==0) return;
    if(i==n && j == n){
        vt.push_back(res);
    }
    if(a[i+1][j]==1 && i!=n && !vs[i+1][j]){
        res+='D';
        vs[i][j]=true;
        Try(i+1,j);
        res.erase(res.length()-1);
        vs[i][j]=false;
    }
    if(a[i][j-1]==1 && j != 1 && !vs[i][j-1]){
        res+='L';
        vs[i][j]=true;
        Try(i,j-1);
        res.erase(res.length()-1);
        vs[i][j]=false;
    }
    if(a[i][j+1]==1 && j != n && !vs[i][j+1]){
        res+='R';
        vs[i][j]=true;
        Try(i,j+1);
        res.erase(res.length()-1);
        vs[i][j]=false;
    }
    if(a[i-1][j]==1 && i != 1 && !vs[i-1][j]){
        res+='U';
        vs[i][j]=true;
        Try(i-1,j);
        res.erase(res.length()-1);
        vs[i][j]=false;
    }
}

void Solve(){
    res="";
    vt.clear();
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            a[i][j]=0;
            vs[i][j]=false;
        }
    }
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    Try(1,1);
    if(vt.empty()) cout << "-1"<<endl;
    else{
        for(int i=0;i<vt.size();i++){
            cout << vt[i]<<" ";
        }
        cout << endl;
    }
}

int main(){
    cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
