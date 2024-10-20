#include<bits/stdc++.h>
using namespace std;

set<long long> a;
int n,i;
long long cz;

int main(){
	scanf("%d",&n);
	a.insert(2);
	a.insert(3);
	a.insert(5);
	while(n != 1){
		cz = *a.begin();
		a.erase(a.begin());
		n --;
		a.insert(2 * cz);
		a.insert(3 * cz);
		a.insert(5 * cz);
	}
	printf("%lld\n",*a.begin());

	return 0;
}

