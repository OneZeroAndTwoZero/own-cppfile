#include<bits/stdc++.h>
using namespace std;

int a[105] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n);
	int sum_time = 0;
	int n_t = n;
	for(int i = 0;i < n;i++){
		sum_time += a[i] * n_t;
		n_t --;
	}
	cout << sum_time << endl;

	return 0;
}

