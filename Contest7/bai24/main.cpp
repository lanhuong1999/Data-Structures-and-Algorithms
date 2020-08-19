#include <bits/stdc++.h>
using namespace std;
struct Node{
    int somu;
    int heso;
    Node *next;
};
struct Dathuc{
    Node *head,*tail;
};
void initDT(Dathuc &dt){
    dt.head=dt.tail=NULL;
}
void addTail(int hs, int sm, Dathuc &dt){
    Node *p=new Node;
    p->heso=hs;
    p->somu=sm;
    p->next=NULL;
    if(dt.head==NULL) dt.head=dt.tail=p;
    else{
        dt.tail->next=p;
        dt.tail=p;
    }
}
int stringToNum(string s){
    int t=0;
    for(int i=0;i<s.length();i++)
        t=t*10+(s[i]-'0');
    return t;
}
void createDt(string s,Dathuc &dt){
    string temp="";
    int l=s.length();
    int hs=0,sm=0;
    for(int i=0;i<l;i++){
        if(isdigit(s[i]))
            temp+=s[i];
        if(s[i]=='*'){
            hs=stringToNum(temp);
            temp="";
        }
        if(s[i]=='+'||i==l-1){
            sm=stringToNum(temp);
            temp="";
            addTail(hs,sm,dt);
        }
    }
}
Dathuc sumDT(Dathuc dt1, Dathuc dt2){
    Node* p = dt1.head;
    Node* q = dt2.head;
    Dathuc res; initDT(res);
    while(p!=NULL || q!=NULL)
    {
        if(p==NULL && q!=NULL)
        {
            addTail(q->heso,q->somu,res);
            q=q->next;
            continue;
        }
        if(p!=NULL && q==NULL)
        {
            addTail(p->heso,p->somu,res);
            p=p->next;
            continue;
        }
        if(p->somu==q->somu)
        {
            addTail(p->heso+q->heso,p->somu,res);
            q=q->next;
        }
        else if(p->somu<q->somu)
        {
            addTail(q->heso,q->somu,res);
            q=q->next;
            continue;
        }
        else
            addTail(p->heso,p->somu,res);
        p=p->next;
    }
    return res;
}
void inDT(Dathuc dt){
    for(Node *p=dt.head;p!=NULL;p=p->next){
        cout<<p->heso<<"*x^"<<p->somu;
        if(p->next!=NULL) cout<<" + ";
    }
    cout<<endl;
}
void solve(string a, string b){
    Dathuc dt1, dt2;
    initDT(dt1); initDT(dt2);
    createDt(a,dt1);
    createDt(b,dt2);
    Dathuc res=sumDT(dt1, dt2);
    inDT(res);
}
int main()
{
    int t; cin>>t;
    cin.ignore();
    while(t--){
        string a,b;
        getline(cin,a);
        getline(cin,b);
        solve(a,b);
    }
    return 0;
}
