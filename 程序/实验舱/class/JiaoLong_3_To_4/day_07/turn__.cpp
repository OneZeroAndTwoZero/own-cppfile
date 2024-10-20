#include<bits/stdc++.h>
using namespace std;

int a[250005] = {0};

int main(){
	long long n,m,k;
	cin >> n >> m >> k;
	k = k % (n * m);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i * m + j];
		}
	}
	for(int i = (n * m - k),f = 0;f < m * n;i++,f++){
		cout << a[i % (m * n)] << " ";
		if(f % m == m - 1){
			cout << endl;
		} 
	}
	

	return 0;
}

