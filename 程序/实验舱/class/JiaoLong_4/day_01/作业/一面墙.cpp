#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int> a;
int n,ans,t,pos,num;

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		pos = 0;
		scanf("%d",&num);
		for(int j = 0;j < num;j++){
			scanf("%d",&t);
			pos += t;
			a[pos] ++;
		}
	}
	unordered_map<int,int> :: iterator it;
	ans = n;
	for(it = a.begin();it != a.end();it ++){
		if((it -> first) != pos && (it -> first) != 0) if(n - (it -> second) < ans) ans = n - (it -> second);
	}
	printf("%d\n",ans);

	return 0;
}

