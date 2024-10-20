#include<bits/stdc++.h>
using namespace std;

bool s = 0;
int n,t,re = 0,no = 0,k = 0;
int a[100005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif
    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        while(~scanf("%d",&t)){
            a[t] ++;
            k ++;
        }
    }
    for(int i = 0;i <= 100004;i ++){
        if(a[i] > 1) re = i;
        if(a[i]) s = 1;
        else if(s && k > 0) no = i;
        k -= a[i];
        //cout << i << " " << k << endl;
    }
    printf("%d %d",no,re);

    return 0;
}

