#include<bits/stdc++.h>
using namespace std;

int a[100005][5] = {0};
int ans[1000005] = {0};

bool cmp(int k,int b){
	int cnt = 0;
	for(int i = 0;i < 5;i++){
		if(a[k][i] < a[b][i]) cnt ++;
	}
	return cnt >= 3; //多于三次是对的，所以返回1 
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0;i < 5;i++){
		for(int j = 0;j < n;j++){
			int t;
			scanf("%d",&t);
			ans[j] = t;
			a[t][i] = j + 1;
		}
	}
	sort(ans,ans + n,cmp);
	for(int i = 0;i < n;i++){
		cout << ans[i] << " ";
	}
	cout << endl;

	return 0;
}

