#include<bits/stdc++.h>
using namespace std;

char a[2500006];
long long ans[2500006] = {0},num;
int n;

int main(){
	scanf("%s",&a);
	int n = strlen(a);
	for(int i = 0;i < n;i++){
		ans[i] = 1;
		if(i != 0 && a[i] == a[i - 1]) ans[i] += ans[i - 1];
		num += ans[i];
	}
	printf("%lld\n",num);

	return 0;
}

