#include<bits/stdc++.h>
using namespace std;

long long ans = 0;
int n,a[200005] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	int l = 0,r = n - 1;
	while(l < r){
		cout << l << ";;" << r <<"[][]" << abs(a[r] - a[l]) << endl;
		ans += abs(a[r] - a[l]);
		l ++,r --;
	}
	printf("%lld\n",ans);

	return 0;
}

