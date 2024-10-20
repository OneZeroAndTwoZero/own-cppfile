#include<bits/stdc++.h>
using namespace std;

int n,m,len,ans_fz,ans_fm = 1;
char a[105][105],ch[155];
bool ok[155];
int cnt[105][105];
double maxn;

int gcd(int a,int b){
    if(b == 0) return a;
    return gcd(b,a % b);
}

void operate(int x1,int y1,int x2,int y2){
    int num = cnt[x2][y2] - cnt[x1 - 1][y2]
    - cnt[x2][y1 - 1] + cnt[x1 - 1][y1 - 1];
    double res = (double)num / (y2 - y1 + x2 - x1 + 2);
    if(res > maxn){
        maxn = res;
        ans_fz = cnt[x2][y2] - cnt[x1 - 1][y2]
        - cnt[x2][y1 - 1] + cnt[x1 - 1][y1 - 1];
        ans_fm = (y2 - y1 + x2 - x1 + 2);
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> n >> m;
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            cin >> a[i][j];
            // cout << a[i][j] << "[]\n";
        }
    }
    cin >> ch;
    len = strlen(ch);
    for(int i = 0;i < len;i ++){
        ok[ch[i]] = 1;
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            cnt[i][j] = ok[a[i][j]];
            // cout << a[i][j] << "   " << ok[a[i][j]] << " \n";
            cnt[i][j] += cnt[i - 1][j] + cnt[i][j - 1]
            - cnt[i - 1][j - 1];
        }
    }
    for(int x1 = 1;x1 <= n;x1 ++){
        for(int y1 = 1;y1 <= m;y1 ++){
            for(int x2 = x1;x2 <= n;x2 ++){
                for(int y2 = y1;y2 <= m;y2 ++){
                    operate(x1,y1,x2,y2);
                }
            }
        }
    }
    int cur = gcd(ans_fm,ans_fz);
    ans_fm /= cur,ans_fz /= cur;
    cout << ans_fz << "/" << ans_fm << "\n";

	return 0;
}