#include<bits/stdc++.h>
using namespace std;

struct oj{
	string name;
	int cj,sj,ract;
	bool operator < (const oj &a) const{
		if(cj != a.cj) return cj > a.cj;
		if(sj != a.sj) return sj < a.sj;
		return ract > a.ract;
	}
}a[3004];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i].name >> a[i].cj >> a[i].sj >> a[i].ract;
	}
	sort(a,a + n);
	for(int i = 0;i < n;i++){
		cout << a[i].name << " " << a[i].cj << " " << a[i].sj << " " << a[i].ract << endl;
	}

	return 0;
}

