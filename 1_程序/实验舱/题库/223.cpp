#include<bits/stdc++.h>
using namespace std;

int a[10005] = {0};

int ji(int a){
	int ans = 1;
	while(a --){
		ans *= 10;
	}
	return ans;
}

int main(){
	int n,q;
	cin >> n >> q;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n);
	for(int i = 0;i < q;i++){
		int le,nr;
		cin >> le >> nr;
		bool t = 1;
		for(int j = 0;j < n;j++){
			if(a[j] < nr){
				continue;
			}
			int qz = a[j] % ji(le);
			if(qz == nr){
				cout << a[j] << endl;
				t = 0;
				break;
			}
		}
		if(t){
			cout << -1 << endl;
		}
	}

	return 0;
}

