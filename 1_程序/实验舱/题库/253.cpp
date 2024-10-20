#include<bits/stdc++.h>
using namespace std;

int n,m,k,t;
multiset<int> a;

int main(){
	scanf("%d %d %d",&n,&m,&k);
	for(int i = 0;i < n;i++){
		scanf("%d",&t);
		a.insert(t);
	}
	multiset<int> :: iterator it;
	it = a.begin();
	for(int i = 0;i < k - 1;i++){
		cout << &it << endl;
	    it ++;
		cout << *it << endl;
	}
	for(int i = 0;i < m;i++){
		scanf("%d",&t);
		a.insert(t);
		printf("%d ",*it);
	}
	puts("");

	return 0;
}

