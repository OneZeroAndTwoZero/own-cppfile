#include<bits/stdc++.h>
using namespace std;

int elder_sister,young_sister,brother;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&elder_sister);
    young_sister = elder_sister - 2;
    brother = elder_sister + 3;
    printf("%d %d\n",young_sister,brother);

    return 0;
} 
