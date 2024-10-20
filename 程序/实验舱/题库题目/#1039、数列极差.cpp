#include<bits/stdc++.h>
using namespace std;

long long n,t;
long long tem1,tem2;
priority_queue<long long> q1;
priority_queue<long long,vector<long long>,greater<long long> > q2;

long long get1(){
    long long res = q1.top();
    q1.pop();
    return res;
}

long long get2(){
    long long res = q2.top();
    q2.pop();
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld",&n);
    for(int i = 0;i < n;i ++){
        scanf("%lld",&t);
        q1.push(t),q2.push(t);
    }
    while(q1.size() > 1){
        q1.push(get1() * get1() + 1);
        q2.push(get2() * get2() + 1);
    }
    printf("%lld\n",q2.top() - q1.top());

	return 0;
}