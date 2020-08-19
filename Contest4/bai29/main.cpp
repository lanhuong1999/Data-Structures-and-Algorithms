#include <bits/stdc++.h>
#define maxn 100000
using namespace std;
int n;
struct point{
    double x,y;
};
point a[maxn];
bool cmp_x(point &a, point &b){
    return a.x<b.x;
}
bool cmp_y(point &a, point &b){
    return a.y<b.y;
}
double dist(point a, point b){
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));

}
double findRes(int l, int r){
    double d=DBL_MAX;
    for(int i=l;i<r;i++)
            for(int j=i+1;j<=r;j++)
                d=min(d,dist(a[i],a[j]));
    return d;
}
double findRes1(point t[], int lent, double d){
    double dmin=d;
    sort(t,t+lent,cmp_y);
    for(int i=0;i<lent-1;i++){
        for(int j=i+1;j<lent && (t[j].y-t[i].y)<dmin;j++)
            dmin=min(dmin,dist(t[i],t[j]));
    }
    return dmin;
}
double solve(int l, int r){
    if(r-l<=3) return findRes(l,r);
    int m=(l+r)/2;
    double mx=a[m].x;

    double dl=solve(l,m);
    double dr=solve(m+1,r);
    double d=min(dl,dr);

    point t[n];
    int lent=0;
    for(int i=l;i<=r;i++){
        if(abs(a[i].x-mx)<d)
            t[lent++]=a[i];
    }
    return min(d,findRes1(t,lent,d));
}
int main()
{
    int t;cin>>t;
    while(t--){

        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i].x>>a[i].y;
        sort(a,a+n,cmp_x);
        printf("%.6f\n",solve(0,n-1));
    }
    return 0;
}
