#include<bits/stdc++.h>
using namespace std;

map<int,int> a;
int b[100005] = {0};
long long ans = 0;

void pai(int n){
	bool p = 0;
	for(int i = 0;i < n - 1;i++){
		for(int j = 0;j < n - i - 1;j++){
			if(b[j] > b[j + 1]){
				ans ++;
				swap(b[j],b[j +1]);
				p = 1;
			}
		}
		if(!p) return;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		int t;
		scanf("%d",&t);
		a[t] = i + 1;
	}
	for(int i = 0;i < n;i++){
		scanf("%d",&b[i]);
		b[i] = a[b[i]];
	}
	pai(n);
	cout << ans << endl;

	return 0;
}

