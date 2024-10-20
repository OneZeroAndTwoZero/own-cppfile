#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int> num;
int n,t;
bool ok = 1;

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%d",&t);
		num[t] ++;
	}
	n = n / 2;
	for(auto && i : num){
		if(i.second >= n){
			printf("%d\n",i.first);
			ok = 0;
		}
	}
	if(ok) printf("No\n");

	return 0;
}

