#include<bits/stdc++.h>
using namespace std;

int ans,t = 3;
char c;

int main(){
    while(t --){
        scanf("%c",&c);
        ans += c - '0';
    }
    printf("%d\n%d\n%d\n",ans,ans * ans,ans * ans * ans);

    return 0;
}