#include<bits/stdc++.h>
using namespace std;

int a[10000];
int binary_search(int x,int n){
	int f = 0,e = n - 1;
	while(f <= e){
		int mid = (f + e) / 2;
		if(a[mid] == x) return mid;
		else if(x > a[mid]) f = mid + 1;
		else e = mid - 1;
	}
	return -1;
}

int main(){
	int n,x;
	cin >> n >> x;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int ans = binary_search(x,n) + 1;
	if(ans == 0){
		cout << "no" << endl;
	}else{
	    cout << ans << endl;
    }
	
	return 0;
} 
