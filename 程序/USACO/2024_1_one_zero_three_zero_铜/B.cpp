#include<bits/stdc++.h>
using namespace std;

int n,s,cur = 1,f = 1,bre = 0;
int q[100005],v[100005];
bool is_use[100005];
int vis[100005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&s);
    for(int i = 1;i <= n;i ++){
        scanf("%d %d",&q[i],&v[i]);
    }
    while(1){
        if(q[s] == 0){
            cur += v[s];
            f *= -1;
        }else{
            if(!is_use[s] && cur >= v[s]){
                bre ++;
                is_use[s] = 1;
            }
        }
        if(vis[s] == cur * f){
            printf("%d\n",bre);
            return 0;
        }
        vis[s] = cur * f;
        s += cur * f;
        // cout << s << ";;\n";
        if(s < 1 || s > n){
            printf("%d\n",bre);
            return 0;
        }
    }

    return 0;
}