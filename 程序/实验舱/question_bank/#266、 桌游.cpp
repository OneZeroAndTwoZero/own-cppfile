#include<bits/stdc++.h>
using namespace std;

int x, pos = 1, las = 1;
int to[105];
char ch[105];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    to[54] = 19, to[90] = 48, to[99] = 77;
    to[9] = 34, to[40] = 64, to[67] = 86;
    ch[54] = ch[90] = ch[99] = '-';
    ch[9] = ch[40] = ch[67] = '+';
    while (~scanf("%d", &x)){
        las = pos;
        if (x == 0){
            printf("Quit.\n");
            break;
        }
        if (pos + x > 100){
            printf("=%d\n", pos);
            continue;
        }
        pos += x;
        int cur = pos;
        if (to[pos]) pos = to[pos];
        if (pos == las) printf("=%d\n", pos);
        else if (to[cur]) printf("%c%d\n", ch[cur], pos);
        else printf("%d\n", pos);
        if (pos == 100) break;
    }
    if (pos == 100) printf("Win.\n");

    return 0;
}