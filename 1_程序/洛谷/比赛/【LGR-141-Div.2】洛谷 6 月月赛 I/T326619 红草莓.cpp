#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[500005] = {0};
bool ok[500005] = {0};

int main(){
    scanf("%d %d",&n,&m);
    for(int i = 0;i < m;i ++){
        scanf("%d",&a[i]);
    }
    if(n <= 1000 && m <= 1000) {
        for (int i = 0; i < m; i++) {
            int cnt = 0;
            for (int j = 0; j * a[i] < n * n; j++) {
                if (!ok[(a[i] * j) % n]) {
                    ok[(a[i] * j) % n] = 1;
                    cnt++;
                }
            }
            printf("%d ", cnt);
        }
    }else if(m <= 10){
        for (int i = 0; i < m; i++) {
            int cnt = 0;
            for (int j = 0; j * a[i] <= n * m * 2; j++) {
                if (!ok[(a[i] * j) % n]) {
                    ok[(a[i] * j) % n] = 1;
                    cnt++;
                }
            }
            printf("%d ", cnt);
        }
    }else{
        for (int i = 0; i < m; i++) {
            int cnt = 0;
            for (int j = 0; j * a[i] < n; j++) {
                if (!ok[a[i] * j]) {
                    ok[a[i] * j] = 1;
                    cnt++;
                }
            }
            printf("%d ", cnt);
        }

    }

    return 0;
}