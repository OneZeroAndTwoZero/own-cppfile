#include<bits/stdc++.h>
using namespace std;

int a[100001] = {0};
int n;

int find(int l,int r,int x){
	if(l > r) return -1;
	int mid = (l + r) / 2;
	if(a[mid] == x) return mid;
	if(a[mid] > x) return find(l,mid - 1,x);
	return find(mid + 1,r,x);
}

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int m;
	cin >> m;
	int c;
	for(int i  = 0;i < m;i++){
		cin >> c;
		if(find(0,n - 1,c) == -1){
			cout << "no" << endl;
		}else{
			cout << "yes" << endl;
		}
	}

	return 0;
}

