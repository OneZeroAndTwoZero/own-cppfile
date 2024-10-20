#include<bits/stdc++.h>
using namespace std;

struct node{
    int ai,bi,ci;
    bool operator < (const node &a) const{
        if(ai != a.ai) return ai < a.ai;
        if(bi != a.bi) return bi < a.bi;
        return ci < a.ci;
    }
};

int a,b,c;
set<node> ans;

int buildyear(int x){
	if(x < 60) return 2000 + x;
    return 1900 + x;
}

bool ifr(int y){
    if(y % 4) return 0;
    if(!(y % 100) && y % 400) return 0;
    return 1;
}

bool checkday(int y,int m,int d){
    if(d < 1 || d > 31) return 0;
    if((m == 4 || m == 6 || m == 9 || m == 11) && d >= 31) return 0;
    if(m == 2 && d >= 29 + ifr(y)) return 0;
    return 1;
}

void out(){
    while(ans.size()){
        node t = *ans.begin();
        ans.erase(ans.begin());
        printf("%04d-%02d-%02d\n",t.ai,t.bi,t.ci);
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d/%d/%d",&a,&b,&c);
    if(b && b <= 12){
        if(checkday(buildyear(c),b,a)){
            ans.insert({buildyear(c),b,a});
        }
        if(checkday(buildyear(a),b,c)){
            ans.insert({buildyear(a),b,c});
        }
    }
    if(a && a <= 12){
        if(checkday(buildyear(c),a,b)){
            ans.insert({buildyear(c),a,b});
        }
    }
    out();

    return 0;
}