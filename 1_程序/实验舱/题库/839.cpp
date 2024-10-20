#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

bool erf(int n,int x){
	int f = 0,l = n - 1;
	while(f <= l){
		int mid = (f + l) / 2;
		if(a[mid] == x) return 1;
		else if(a[mid] < x) f = mid + 1;
		else l = mid - 1;
	}
	return 0;
}

int main(){
	int n,m;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n);
	cin >> m;
	for(int i = 0;i < n;i++){
		int need = m - a[i];
		if(erf(n,need)){
			cout << a[i] << " " << need << endl;
			return 0;
		}
	}
	cout << "No" << endl;

	return 0;
}

