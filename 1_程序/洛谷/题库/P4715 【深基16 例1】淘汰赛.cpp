#include<bits/stdc++.h>
using namespace std;

struct node{
    int id;
    int x;
};

int n,t,ans;
queue<node> q;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < pow(2,n);i ++){
        scanf("%d",&t);
        q.push({i + 1,t});
    }
    for(int i = n - 1;i >= 0;i --){
        for(int j = 0;j < pow(2,i);j ++){
            node num1,num2;
            num1 = q.front();
            q.pop();
            num2 = q.front();
            q.pop();
            if(num1.x < num2.x){
                q.push(num2);
                ans = num1.id;
            }else{
                q.push(num1);
                ans = num2.id;
            }
        }
    }
    printf("%d\n",ans);

	return 0;
}
