#include<bits/stdc++.h>
using namespace std;

int n,t;
priority_queue<int> q1;
priority_queue<int,vector<int>,greater<int> >q2;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&t);
        q1.push(t);
        q2.push(t);
    }
    while(q1.size() > 1){
        int num1,num2;
        num1 = q1.top();
        q1.pop();
        num2 = q1.top();
        q1.pop();
        q1.push(num1 * num2 + 1);
    }
    while(q2.size() > 1){
        int num1,num2;
        num1 = q2.top();
        q2.pop();
        num2 = q2.top();
        q2.pop();
        q2.push(num1 * num2 + 1);
    }
    printf("%d\n",abs(q1.top() - q2.top()));

	return 0;
}