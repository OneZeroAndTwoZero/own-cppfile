#include<bits/stdc++.h>
using namespace std;

struct pro{
	int we;
	int id;
};

int mz[10005] = {0};
pro r[10005] = {0};
int t[10005] = {0};
map<int,int> zhao;

bool cmp(pro a,pro b){
	return a.we < b.we;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> mz[i];
		t[i] = mz[i];
	}
	for(int i = 0;i < n;i++){
		cin >> r[i].we;
		r[i].id = i + 1;
	}
	sort(r,r + n,cmp);
	sort(t,t + n);
	for(int i = 0;i < n;i++){
		zhao[t[i]] = r[i].id; 
	}
	for(int i = n - 1;i >= 0;i--){
		cout << zhao[mz[i]] << " ";
	}
	cout << endl;
	

	return 0;
}

