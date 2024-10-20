#include<bits/stdc++.h>
using namespace std;

struct dna{
	string xl;
	int id,num;
}a[105];

int much(string s){
	int ans = 0;
	for(int i = 0;i < s.size() - 1;i++){
		for(int j = i;j < s.size();j ++){
			if(s[i] > s[j]) ans ++;
		}
	}
	return ans;
}

bool cmp(dna a,dna b){
	if(a.num != b.num) return a.num < b.num;
	return a.id < b.id;
}

int main(){
	int m;
	cin >> m;
	for(int i = 0;i < m;i++){
		cin >> a[i].xl;
		a[i].num = much(a[i].xl);
		a[i].id = i + 1;
	}
	sort(a,a + m,cmp);
	for(int i = 0;i < m;i++){
		cout << a[i].xl << endl;
	}

	return 0;
}

