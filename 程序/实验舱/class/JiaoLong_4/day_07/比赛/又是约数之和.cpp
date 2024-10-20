#include<bits/stdc++.h>
using namespace std;

int n,a;
int pos = 0;
int p[800000] = {0};
long long ans_ = 0;
bool check[10000005];
long long ans[10000005] = {0};
long long t[1000005] = {0};

void olshai(){
	for(int i = 2;i < n;i++){
		cout << i << ";;\n";
		if(check[i] == 0) p[pos ++] = i;
		if(t[i] == 0) t[i] = 1;
		for(int j = 0;j < pos && i * p[j] <= n / i;j ++){
			cout << j << " " << p[j] << "[][]\n";
			check[i] = 1;
			if(i % p[j] == 0){
				ans[i * p[j]] = ans[i] / t[i] * (t[i] + p[j]);
				t[i * p[j]] = t[i] + p[j];
				break;
			}else{
				ans[i * p[j]] = ans[i] * 2;
				t[i * p[j]] += p[j];
			}
		}
	}
}

int main(){
	scanf("%d %d",&n,&a);
	olshai();
	for(int i = 1;i <= n;i++){
		ans_ += (ans[i] + a);
		cout << ans[i] << "[][]\n";
		if(i & 1) ans_ -= i;
		else ans_ += 1;
	}
	printf("%lld\n",ans_);

	return 0;
}

