#include<bits/stdc++.h>
using namespace std;

map<int,int> zhao;
int a[100005] = {0},b[100005] = {0};;

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a,a + n);
	for(int i = 0;i < n;i++){
		zhao[a[i]] = i + 1;
	}
	for(int i = 0;i < n;i++){
		cout << zhao[b[i]] << " ";
	}
	cout << endl;

	return 0;
}

