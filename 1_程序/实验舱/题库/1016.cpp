#include<bits/stdc++.h>
using namespace std;

int a[10005] = {0};
int now[10005] = {0};

int main(){
	int n,m;
	while(cin >> n >> m){
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		m = min(n,m);
		for(int i = 0;i < m;i++){
			now[i] = a[i];
		}
		sort(now,now + m);
		for(int i = m;i < n;i++){
			now[0] += a[i];
			sort(now,now + m);
		}
		cout << now[m - 1] << endl;
	}
	

	return 0;
}

