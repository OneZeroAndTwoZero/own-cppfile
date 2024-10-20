#include<bits/stdc++.h>
using namespace std;

struct node{
    int si;
    int idx;
    int wi;
    bool operator < (const node &a){
        if(si != a.si) return si > a.si;
        return idx < a.idx;
    }
};

int n,r,q;
node a[200005];
node win[200005] = {0},lose[200005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d %d",&n,&r,&q);
    for(int i = 0;i < 2 * n;i ++){
        scanf("%d",&a[i].si);
    }
    for(int i = 0;i < 2 * n;i ++){
        scanf("%d",&a[i].wi);
        a[i].idx = i + 1;
    }
    sort(a,a + 2 * n);
    for(int k = 0;k < r;k ++){
        int pos1 = 0,pos2 = 0;
        for(int i = 0;i < n;i ++){
            if(a[2 * i].wi > a[2 * i + 1].wi){
                win[pos1] = a[2 * i];
                win[pos1 ++].si += 1;
                lose[pos2 ++] = a[2 * i + 1];
            }else{
                win[pos1] = a[2 * i + 1];
                win[pos1 ++].si += 1;
                lose[pos2 ++] = a[2 * i];
            }
        }
        int num1 = 0,num2 = 0,pos = 0;
        while(num1 < pos1 && num2 < pos2){
            if(win[num1].si > lose[num2].si || win[num1].si == lose[num2].si && win[num1].idx < lose[num2].idx){
                a[pos ++] = win[num1 ++];
            }else{
                a[pos ++] = lose[num2 ++];
            }
        }
        while(num1 < pos1) a[pos ++] = win[num1 ++];
        while(num2 < pos2) a[pos ++] = lose[num2 ++];
    }
    printf("%d\n",a[--q].idx);

	return 0;
}
