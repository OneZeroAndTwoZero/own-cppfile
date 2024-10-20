#include<bits/stdc++.h>
using namespace std;

int n,x,y,z,ans = 0;
unordered_map<int,int> a;
int out[100005][3] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d.%d.%d",&x,&y,&z);
		a[x * 256 * 256 + y * 256 + z] = 1;
		out[i][0] = x,out[i][1] = y,out[i][2] = z;
	}
	for(auto && i : a){
		ans ++;
	}
	printf("%d\n",ans);
	for(int i = 0;i < n;i++){
		x = out[i][0],y = out[i][1],z = out[i][2];
		if(a[x * 256 * 256 + y * 256 + z] == 1){
			a[x * 256 * 256 + y * 256 + z] --;
			printf("%03d.%03d.%03d ",x,y,z);
		}
	}

	return 0;
}

