#include<bits/stdc++.h>
using namespace std;

int a[10005] = {0};

int main(){
	int n;
	cin >> n;
	int sum = 0;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		sum += a[i];
	}
	int ea = sum / n;
	int ans = 0;
	for(int i = 0;i < n - 1;i++){
		if(a[i] != ea){
			a[i + 1] += (a[i] - ea);
			a[i] = ea;
			ans ++;
		}
	}
    cout << ans << endl;
    
	return 0;
}

