#include<bits/stdc++.h>
using namespace std;

int n,sum;
string s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    while(n --){
        sum = 0;
        cin >> s;
        for(int i = 0;i < s.size();i ++){
            sum += s[i] ^ 48;
        }
        if(sum % 3 == 0) printf("Yes ");
        else printf("No ");
        printf("%d\n",sum);
    }

    return 0;
}