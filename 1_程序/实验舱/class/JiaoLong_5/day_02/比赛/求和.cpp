#include<bits/stdc++.h>
using namespace std;

vector<int> zhao[100005];
int n,m,ans = 0;
int a[100005] = {0},c[100005] = {0};

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i < n;i++){
		scanf("%d",&c[i]);
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < zhao[c[i]].size();j++){
			if((i - zhao[c[i]][j]) % 2 == 0){
				ans += ((zhao[c[i]][j] + i + 2) % 10007) * ((a[zhao[c[i]][j]] + a[i]) % 10007);
				ans %= 10007;
			}
		}
		zhao[c[i]].push_back(i);
	}
	printf("%d\n",ans);

	return 0;
}

