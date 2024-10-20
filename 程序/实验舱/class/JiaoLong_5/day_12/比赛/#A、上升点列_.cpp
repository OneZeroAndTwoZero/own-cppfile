#include<bits/stdc++.h>
using namespace std;

struct dian{
	int xi,yi;
	bool operator < (const dian &a) const{
		if(xi != a.xi) return xi < a.xi;
		return yi < a.yi;
	}
};

dian a[1005];
int check[1005] = {0};
int n,k,ans = 0;

int main(){
	scanf("%d %d",&n,&k);
	for(int i = 0;i < n;i++){
		scanf("%d %d",&a[i].xi,&a[i].yi);
	}
	sort(a,a + n);
	for(int i = 0;i < n;i ++){
		cout << a[i].xi << " " << a[i].yi << endl;
	}
	for(int i = 1;i < n;i ++){
		check[i] = abs(a[i].xi - a[i - 1].xi) + abs(a[i].yi - a[i - 1].yi) - 1;
		check[i] = check[i - 1] + check[i];
	}
	for(int i = 0;i < n;i ++){
		for(int j = i;j < n;j ++){
			if(check[j] - check[i] <= k){
				if(ans < j - i + 1){
					ans = j - i + 1;
				}
			}
		}
	}
	ans += k;
	printf("%d\n",ans);

	return 0;
}
