#include<bits/stdc++.h>
using namespace std;

int n,m,pos = 1;
int a[100005];
int u[100005];
priority_queue<int> qmax;
priority_queue<int,vector<int>,greater<int> > qmin;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&m,&n);
    for(int i = 1;i <= m;i ++){
        scanf("%d",&a[i]);
    }
    for(int i = 1;i <= n;i ++){
        scanf("%d",&u[i]);
    }
    for(int i = 1;i <= m;i ++){
        if(!qmax.size() || a[i] <= qmax.top()) qmax.push(a[i]);
        else qmin.push(a[i]);
        while(pos <= n && u[pos] == i){
            while(qmax.size() > pos){
                qmin.push(qmax.top());
                qmax.pop();
            }
            while(qmax.size() < pos){
                qmax.push(qmin.top());
                qmin.pop();
            }
            printf("%d\n",qmax.top());
            pos ++;
        }
    }

    return 0;
}