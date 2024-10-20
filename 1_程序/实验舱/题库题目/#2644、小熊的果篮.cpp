#include<bits/stdc++.h>
using namespace std;

struct node{
    int s,num;
};

int n,las = 1,cnt;
int a[200005];
vector<node> ans,t;

void operate(){
    cout << 192389 << "[][]\n";
    t.clear();
    for(auto && i : ans){
        printf("%d ",i.s);
        i.num -= 1;
        i.s ++;
        if(i.num){
            t.push_back(i);
        }
    }
    printf("\n");
    swap(ans,t);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
        a[0] = a[i];
        if(a[i - 1] == a[i]){
            cnt ++;
        }else{
            ans.push_back({las,cnt});
            las = i;
            cnt = 1;
        }
    }
    ans.push_back({las,cnt});
    while(ans.size()){
        operate();
    }

	return 0;
}