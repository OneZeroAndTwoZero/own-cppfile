#include<bits/stdc++.h>
using namespace std;

int a[10001] = {0}; 

int find(int l,int r,int x){
	if(l > r) return -1;
	int mid = (l + r) / 2;
	if(a[mid] == x) return mid;
	if(a[mid] > x) return find(l,mid - 1,x);
	return find(mid + 1,r,x);
}

int main(){
	int n,x;
	cin >> n >> x;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	if(find(0,n - 1,x) == -1){
		cout << "no" << endl;
	}else{
		cout << find(0,n - 1,x) + 1 << endl;
	}

	return 0;
}

