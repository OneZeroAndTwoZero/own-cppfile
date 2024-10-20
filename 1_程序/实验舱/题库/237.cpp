#include<bits/stdc++.h>
using namespace std;

string a[105];

bool ok(string s,char k,int m){
	int sl = 0;
	for(int i = 0;i < s.size();i++){
		if(s[i] == k){
			sl ++;
		}
	}
	if(sl == m) return 1;
	return 0;
}

int main(){
	int n,m;
	cin >> n >> m;
	char k;
	cin >> k;
	int cnt = 0;
	for(int i = 0;i < n;i++){
		string tem;
		cin >> tem;
		if(ok(tem,k,m)){
			a[cnt ++] = tem;
		}
	}
	if(cnt == 0){
		cout << "-1" << endl;
		return 0;
	}
	sort(a,a + cnt);
	for(int i = 0;i < cnt;i++){
		cout << a[i] << endl;
	}

	return 0;
}

