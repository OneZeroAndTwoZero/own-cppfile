#include<bits/stdc++.h>
using namespace std;

int bz[9] = {1,2,3,4,5,6,7,8,9};

void out(int a[],int n){
	for(int i = 0;i < n;i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void pai(int a[],int f,int n){
	if(f == n - 1){
		out(a,n);
		return;
	}
	for(int i = f;i < n;i++){
		swap(a[i],a[f]);
		pai(a,f + 1,n);
		swap(a[i],a[f]);
	}
}

int main(){
	int n;
	cin >>n;
	pai(bz,0,n);

	return 0;
}

