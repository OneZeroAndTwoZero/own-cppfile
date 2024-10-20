#include<bits/stdc++.h>
using namespace std;

char a[105];
int num1 = 0,num2 = 0,num3 = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%s",&a);
    for(int i = 0;i < strlen(a);i ++){
        if(a[i] >= '0' && a[i] <= '9') num1 ++;
        if(a[i] >= 'a' && a[i] <= 'z') num2 ++;
        if(a[i] >= 'A' && a[i] <= 'Z') num3 ++;
    }
    printf("%d %d %d\n",num1,num2,num3);

	return 0;
}
