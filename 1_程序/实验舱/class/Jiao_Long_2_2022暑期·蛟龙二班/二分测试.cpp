#include<bits/stdc++.h>
using namespace std;

int erfen(int a[],int x,int n){
	int f = 0,e = n - 1;
	int mid;
	while(f <= e){
		mid = (f + e) / 2;
		if(a[mid] == x){
			return -1;
		}else if(x > a[mid]){
			f = mid + 1;
		}else{
			e = mid - 1;
		}
	}
	return a[mid];
	
}

int main(){
	int a[10] = {2,4,6,8,10,12,14,16,18,19};
	cout << erfen(a,15,10) << endl;

	return 0;
}

