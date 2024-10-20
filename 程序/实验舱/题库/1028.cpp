#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

void out(int n){
	for(int i = 0;i < n;i++){
		cout << a[i] << " ";
	}
	cout << "LKLKL\n";
}

void pai(int f,int l,int n){
	if(f >= l) return;
	int tf = f,tl = l;
	int key = a[f];
	while(f < l){
		while(a[l] >= key && f < l){
			l --; 
		}
		swap(a[f],a[l]);
		//out(n);
		while(a[f] <= key && f < l){
			f ++;
		}
		swap(a[f],a[l]);
		//out(n);
	}
	pai(tf,f - 1,n);
	pai(l + 1,tl,n);
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	pai(0,n - 1,n);
	for(int i = 0;i < n;i++){
		cout << a[i] << endl;
	}

	return 0;
}

