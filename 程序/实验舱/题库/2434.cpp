#include<bits/stdc++.h>
using namespace std;

long long a[1005] = {0};

void out(int n){
	for(int i = 0;i < n;i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 0;i < n - 1;i ++){
		long long min = 1000000000001,min_n;
		for(int j = i;j < n;j++){
			if(a[j] < min){
				min = a[j];
				min_n = j;
			}
		}
		swap(a[i],a[min_n]);
		out(n);
	}

	return 0;
}

