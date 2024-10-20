#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n;
long long sum;
int sumr[__len(3)],sumc[__len(3)];
int a[__len(3)][__len(3)];
set<int> sc,sr;

bool check(int x,int y){
    swap(a[x / n][x % n],a[y / n][y % n]);
    set<int> sc,sr;
    for(int i = 0;i < n;i ++){
        int sumr = 0,sumc = 0;
        for(int j = 0;j < n;j ++){
            sumr += a[i][j];
            sumc += a[j][i];
        }
        sc.insert(sumc),sr.insert(sumr);
    }
    swap(a[x / n][x % n],a[y / n][y % n]);
    if(sc.size() > 1 || sr.size() > 1) return 0;
    return 1;
}

void solve1(){
    for(int i = 0;i < n * n;i ++){
        for(int j = i + 1;j < n * n;j ++){
            if(!check(i,j)) continue;
            printf("%d %d\n",i + 1,j + 1);
        }
    }
}

void solve2(){
    int maxr,maxc,minr,minc;
    for(int i = 0;i < n;i ++){
        if(sumr[i] > sum) maxr = i;
        if(sumr[i] < sum) minr = i;
        if(sumc[i] > sum) maxc = i;
        if(sumc[i] < sum) minc = i;
    }
    int pos1 = ((maxr) * n) + maxc;
    int pos2 = ((minr) * n) + minc;
    printf("%d %d\n",min(pos1,pos2) + 1,max(pos1,pos2) + 1);
}

void solve3(){
    int maxc,minc;
    for(int i = 0;i < n;i ++){
        if(sumc[i] > sum) maxc = i;
        if(sumc[i] < sum) minc = i;
    }
    for(int i = 0;i < n;i ++){
        if(sumc[maxc] - a[i][maxc] + a[i][minc] == sumc[minc] - a[i][minc] + a[i][maxc]){
            int pos1 = n * i + maxc,pos2 = n * i + minc;
            printf("%d %d\n",min(pos1,pos2) + 1,max(pos1,pos2) + 1);
        }
    }
}

void solve4(){
    int maxr,minr;
    for(int i = 0;i < n;i ++){
        if(sumr[i] > sum) maxr = i;
        if(sumr[i] < sum) minr = i;
    }
    for(int j = 0;j < n;j ++){
        if(sumr[maxr] - a[maxr][j] + a[minr][j] == sumr[minr] - a[minr][j] + a[maxr][j]){
            int pos1 = n * maxr + j,pos2 = n * minr + j;
            printf("%d %d\n",min(pos1,pos2) + 1,max(pos1,pos2) + 1);
        }
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

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            sumr[i] += a[i][j];
            sumc[i] += a[j][i];
            sum += a[i][j];
        }
        sc.insert(sumc[i]),sr.insert(sumr[i]);
    }
    sum /= n;
    if(n <= 5) solve1();
    else if(sc.size() == 3 && sr.size() == 3) solve2();
    else if(sr.size() == 1) solve3(); // 同行
    else solve4(); // 同列

    return 0;
}