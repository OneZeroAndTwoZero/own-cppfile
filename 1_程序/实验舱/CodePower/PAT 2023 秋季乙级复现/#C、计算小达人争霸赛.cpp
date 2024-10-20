#include<bits/stdc++.h>
using namespace std;

int maxn = -1,maxpos;
int n,m,num1,num2,num3;
int cnt[1005];
string tem1,tem2,name[1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for(int i = 0;i < n;i ++){
        cin >> name[i];
        for(int j = 0;j < m;j ++){
            cin >> num1 >> tem1 >> num2 >> tem2 >> num3;
            cnt[i] += num1 + num2 == num3;
        }
        cout << name[i] << " " << cnt[i] << "\n";
        if(cnt[i] > maxn){
            maxn = cnt[i];
            maxpos = i;
        }
    }
    cout << "Guan Jun Shi " << name[maxpos] << "!\n";

    return 0;
}