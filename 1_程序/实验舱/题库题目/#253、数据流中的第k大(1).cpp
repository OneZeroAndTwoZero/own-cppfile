#include<bits/stdc++.h>
using namespace std;

int n,m,k,t,*ans;
multiset<int> a;

int main(){
	scanf("%d %d %d",&n,&m,&k);
	for(int i = 0;i < n;i++){
		scanf("%d",&t);
		a.insert(t);
	}
	multiset<int> :: iterator it = a.begin();
	for(int i = 0;i < k - 1;i++){
		it ++;
	}
	for(int i = 0;i < m;i++){
		scanf("%d",&t);
		printf("%d ",*it);
		cout << &it << endl;
	}

	return 0;
}

