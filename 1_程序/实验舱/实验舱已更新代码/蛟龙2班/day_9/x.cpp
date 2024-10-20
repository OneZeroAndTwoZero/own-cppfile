#include<bits/stdc++.h>
using namespace std;

int halffind(int a[],int L,int R,int x){
	int mid;
	while(L <= R){
		mid = (L + R) / 2;
		if(a[mid] == x) return mid;
		else if(x > a[mid]) L = mid + 1;
		else R = mid - 1;
	}
	return -1;
} 

int main(){
	int n,x;
	cin >> n >> x;
	int a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int ans = halffind(a,0,n - 1,x);
	if(ans == -1){
		cout << "no" << endl;
	}else{
		cout << ans + 1 << endl;
	}

	return 0;
}

