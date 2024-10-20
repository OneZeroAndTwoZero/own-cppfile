#include<bits/stdc++.h>
using namespace std;

multiset<int> a;
int n,t,ans;
long long num1,num2;

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&t);
		a.insert(t);
	}
	ans = 0;
	while(a.size() != 1){
		num1 = *a.begin();
		a.erase(a.begin());
		num2 = *a.begin();
		a.erase(a.begin());
		ans += num1 + num2;
		a.insert(num1 + num2);
	}
    printf("%d\n",ans);

	return 0;
}

