#include<bits/stdc++.h>
using namespace std;

int a[1005];

void pai(int n){
	for(int i = 0;i < n - 1;i++){
		for(int j = 0;j < n - i - 1;j++){
			if(a[j] > a[j + 1]){
				swap(a[j],a[j + 1]);
			}
		}
	}
}

int main(){
	int n,x;
	cin >> n >> x;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	pai(n);
	int xi,h;
	bool ok = 1;
	for(int i = 0;i < n;i++){
		if(a[i] == x && ok){
			ok = 0;
			xi = i + 1;
			h = i + 1;
		}
		if(a[i] == x){
			h = i + 1;
		}
	}
	cout << xi << " " << h << endl;

	return 0;
}

