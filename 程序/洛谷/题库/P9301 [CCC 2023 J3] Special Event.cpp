#include<bits/stdc++.h>
using namespace std;

bool ok = 0;
int n,ans,d[15] = {0};
char a[25][25];

int main(){
    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%s",a[i]);
    }
    for(int i = 0;i < 5;i ++){
        int cnt = 0;
        for(int j = 0;j < n;j ++){
            cnt += a[j][i] == 'Y';
        }
        d[i + 1] = cnt;
        ans = max(ans,cnt);
    }
    for(int i = 1;i <= 5;i ++){
        if(d[i] == ans){
            if(ok){
                printf(",");
            }
            ok = 1;
            printf("%d",i);
        }
    }

    return 0;
}

