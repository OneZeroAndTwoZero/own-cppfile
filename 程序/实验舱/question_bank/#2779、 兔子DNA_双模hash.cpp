#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int m,sl,sr,el,er;
int num = 2;
char s[__len(6)];
int f[25][__len(6)],p[25][__len(6)];
int charsize[25] = {131,137},mod[25] = {998244353,1000000007};

void putout(vector<int> t){
    for(auto && i : t) printf("%d ",i);
    printf("\n\n");
}

void __init(){
    for(int i = 0;i < num;i ++){
        p[i][0] = 1;
        for(int j = 1;s[j];j ++){
            f[i][j] = (1LL * f[i][j - 1] * charsize[i] + s[j]) % mod[i];
            p[i][j] = (1LL * p[i][j - 1] * charsize[i]) % mod[i];
        }
    }
}

vector<int> query(int l,int r){
    vector<int> res;
    for(int i = 0;i < num;i ++){
        int tem_ = (f[i][r] - (1LL * p[i][r - l + 1] * f[i][l - 1])) % mod[i];
        tem_ += mod[i];
        tem_ %= mod[i];
        res.push_back(tem_);
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%s",s + 1);
    __init();
    scanf("%d",&m);
    while(m --){
        scanf("%d %d %d %d",&sl,&sr,&el,&er);
        if(query(sl,sr) == query(el,er)){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }

    return 0;
}