#include<bits/stdc++.h>
using namespace std;

int T;
int n,pos = 0;
int a[200005];
set<int> f[200005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&T);
    while(T --){
        scanf("%d",&n);
        pos = 0;
        for(int i = 0;i < n;i ++){
            scanf("%d",&a[i]);
            f[i].clear();
        }
        for(int i = 0;i < n;i ++){
            if(a[i] == 0){
                printf("%c",(char)pos + 'a');
                f[0].insert(pos);
                pos ++;
            }else{
                int tem = *f[a[i] - 1].begin();
                f[a[i]].insert(tem);
                printf("%c",(char)tem + 'a');
                f[a[i] - 1].erase(f[a[i] - 1].begin());
            }
        }
        printf("\n");
    }

    return 0;
}