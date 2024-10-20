#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005];

void Quick_sort(int l,int r){
    if(l >= r) return;
    int mainpos = a[(l + r) >> 1]; // 主元
    int teml = l,temr = r;
    while(teml <= temr){
        while(a[teml] < mainpos) teml ++;
        while(a[temr] > mainpos) temr --;
        if(teml <= temr){
            swap(a[teml],a[temr]);
            teml ++,temr --;
        }
    }
    Quick_sort(l,temr);
    Quick_sort(teml,r);
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
    for(int i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    Quick_sort(0,n - 1);
    for(int i = 0;i < n;i++){
        printf("%d\n",a[i]);
    }

    return 0;
}

