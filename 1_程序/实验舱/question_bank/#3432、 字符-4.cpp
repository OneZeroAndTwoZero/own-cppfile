#include<bits/stdc++.h>
using namespace std;

char ch;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%c", &ch);
    printf("%c%c\n", (char)(ch + 1), (char)(ch + 2));

    return 0;
}