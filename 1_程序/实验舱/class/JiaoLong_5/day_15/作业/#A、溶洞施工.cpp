#include<bits/stdc++.h>
using namespace std;

int l,h,t,min_ = 500005,minnum;
int d[500005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&l,&h);
    for(int i = 0;i < l;i ++){
        scanf("%d",&t);
        if(i & 1){
            d[h - t + 1] ++;
            // cout << h - t + 1 << "[][]\n";
            d[h + 1] --;
            // cout << h + 1 << "[][][]\n";
        }else{
            d[1] ++;
            d[t + 1] --;
            // cout << t + 1 << "[][][][]\n";
        }
    }
    for(int i = 1;i <= h;i ++){
        // cout << i << "    " << d[i] << ";;;\n";
        d[i] += d[i - 1];
        // cout << i << "  " << d[i] << "\n";
        if(d[i] < min_)
            min_ = d[i],minnum = 1;
        else if(d[i] == min_)
            minnum ++;
    }
    printf("%d %d",min_,minnum);

	return 0;
}