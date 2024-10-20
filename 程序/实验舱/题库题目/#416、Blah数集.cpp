#include<bits/stdc++.h>
using namespace std;

set<int> q;
int a,n,pos = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    while(~scanf("%d %d",&a,&n)){
        q.clear();
        q.insert(a);
        pos = 1;
        while(q.size()){
            if(pos == n){
                printf("%d\n",*q.begin());
                break;
            }
            q.insert(2 * *q.begin() + 1);
            q.insert(3 * *q.begin() + 1);
            pos ++;
            q.erase(q.begin());
        }
    }

	return 0;
}