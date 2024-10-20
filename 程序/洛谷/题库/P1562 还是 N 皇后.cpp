#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
char t[105];
int a[105][105] = {0};
unordered_map<int,int> f;

int lowbit(int x){
	return x & (-x);
}

void dfs(int k,int mask1,int mask2,int mask3){
	if(k == n){
		ans ++;
        return;
	}
	//cout << mask1 << " " << mask2 << " " << mask3 << "\n";
	int mask = mask1 & mask2 & mask3;
    cout << "---" << mask << "----\n";
	while(mask > 0){
        cout << k << "========\n";
		int x = lowbit(mask);
        cout << x << "[][]\n";
		mask -= x;
		if(f[x] >= n || a[k][f[x]]) continue;
		mask1 -= x,mask2 -= x,mask3 -= x;
		mask2 >>= 1,mask3 <<= 1;
		mask2 += (1 << (n - 1));
		mask3 += 1;
        cout << k << "  " << f[x] << endl;
        cout << mask1 << " " << mask2 << " " << mask3 << "\n";
		dfs(k + 1,mask1,mask2,mask3);
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d",&n);
	for(int i = 1;i < n;i ++){
		scanf("%s",t);
		for(int j = 0;j < n;j ++){
			if(t[j] == '.')
				a[i][j] = 1;
		}
	}
	for(int i = 1,j = 0;j <= 18;i *= 2,j ++){
		f[i] = j;
	}
	dfs(0,(1 << n) - 1,(1 << n) - 1,(1 << n) - 1);
	printf("%d\n",ans);

	return 0;
}