#include<bits/stdc++.h>
using namespace std;

struct node{
    int xi,yi;
    bool operator < (const node &a) const{
        return xi < a.xi;
    }
};

int n,d;
int l = 1,r = 1000000000,ans = -1;
node a[100005];

bool check(int x){
    deque<int> q1,q2;
    for(int i = 0;i < n;i ++){
        while(q1.size() && a[q1.front()].xi < a[i].xi - x){
            q1.pop_front();
        }
        while(q2.size() && a[q2.front()].xi < a[i].xi - x){
            q2.pop_front();
        }
        while(q1.size() && a[q1.back()].yi <= a[i].yi){
            q1.pop_back();
        }
        while(q2.size() && a[q2.back()].yi >= a[i].yi){
            q2.pop_back();
        }
        q1.push_back(i),q2.push_back(i);
        if(a[q1.front()].yi - a[q2.front()].yi >= d){
            return 1;
        }
    }
    return 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&d);
    for(int i = 0;i < n;i ++){
        scanf("%d %d",&a[i].xi,&a[i].yi);
    }
    sort(a,a + n);
    while(l <= r){
        int mid = (l + r) >> 1;
        if(check(mid)){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    printf("%d\n",ans);

	return 0;
}