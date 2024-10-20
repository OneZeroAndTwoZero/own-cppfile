#include<bits/stdc++.h>
using namespace std;

int ans = 0,check;
char a[105];

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif


	scanf("%s",&a);
	for(int i = 0,j = 0;i < 12;i ++){
		if(a[i] >= '0' && a[i] <= '9'){
			j ++;
			ans += (a[i] - '0') * j;
		}
	}
	ans %= 11;
	check = a[12] - '0';
	if(a[12] == 'X') check = 10;
	if(ans == check){
		printf("Right\n");
	}else{
		if(ans == 10) a[12] = 'X';
		else a[12] = ans + '0';
		printf("%s",a);
	}

	return 0;
}

