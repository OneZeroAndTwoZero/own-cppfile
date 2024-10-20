#include<bits/stdc++.h>
using namespace std;

int ans1,ans2;
char a[14][14],t[14][14];

void __init(char c1,char c2){
    for(int i = 0;i < 3;i ++){
        for(int j = 0;j < 3;j ++){
            if(a[i][j] == c1 || a[i][j] == c2){
                t[i][j] = c1;
            }else{
                t[i][j] = a[i][j];
            }
        }
    }
}

bool check(char x){
    for(int i = 0;i < 3;i ++){
        if(t[i][0] == t[i][1] && t[i][1] == t[i][2] && t[i][0] == x){
            return 1;
        }
        if(t[0][i] == t[1][i] && t[1][i] == t[2][i] && t[0][i] == x){
            return 1;
        }
    }
    if(t[0][0] == t[1][1] && t[1][1] == t[2][2] && t[0][0] == x){
        return 1;
    }
    if(t[2][0] == t[1][1] && t[1][1] == t[0][2] && t[2][0] == x){
        return 1;
    }
    return 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    for(int i = 0;i < 3;i ++){
        scanf("%s",a[i]);
    }
    for(int i = 0;i < 26;i ++){
        __init('A' + i,'A' + i);
        ans1 += check('A' + i);
    }
    for(int i = 0;i < 26;i ++){
        for(int j = i + 1;j < 26;j ++){
            __init('A' + i,'A' + j);
            ans2 += check('A' + i);
        }
    }
    printf("%d\n%d\n",ans1,ans2);

	return 0;
}