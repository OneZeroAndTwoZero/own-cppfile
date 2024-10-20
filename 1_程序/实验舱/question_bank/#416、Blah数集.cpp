#include<bits/stdc++.h>
using namespace std;

long long a,n,ans;
queue<long long> q1,q2;

long long getnum(){
    long long res;
    if(q1.size() && !q2.size()){
        res = q1.front();
        q1.pop();
    }else if(!q1.size() && q2.size()){
        res = q2.front();
        q2.pop();
    }else{
        if(q1.front() < q2.front()){
            res = q1.front();
            q1.pop();
        }else if(q1.front() != q2.front()){
            res = q2.front();
            q2.pop();
        }else{
            res = q1.front();
            while(q1.size() && q1.front() == res) q1.pop();
            while(q2.size() && q2.front() == res) q2.pop();
        }
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    while(~scanf("%lld %lld",&a,&n)){
        while(q1.size()) q1.pop();
        while(q2.size()) q2.pop();
        q1.push(a);
        while(n --){
            ans = getnum();
            // cout << ans << "[]\n";
            q1.push(ans * 2 + 1);
            q2.push(ans * 3 + 1);
        }
        printf("%lld\n",ans);
    }

	return 0;
}