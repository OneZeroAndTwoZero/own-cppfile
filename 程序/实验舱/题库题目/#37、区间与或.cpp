#include<bits/stdc++.h>
using namespace std;

int a[105] = {0};
int n,max_ = -1,max_l,max_r,max_c = 1000000;

int cz(int l,int r){
	int ans = 0;
	for(int i = l;i <= r;i ++){
		ans = ans | a[i];
	}
	return ans;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
	
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i < n;i++){
		for(int j = i;j < n;j++){
			int tem = cz(i,j);
			if(tem > max_ || tem == max_ && j - i < max_c){
				max_ = tem;
				max_l = i + 1,max_r = j + 1;
				max_c = j - i;
			}
		}
	}
	printf("%d %d\n",max_l,max_r);

	return 0;
}

