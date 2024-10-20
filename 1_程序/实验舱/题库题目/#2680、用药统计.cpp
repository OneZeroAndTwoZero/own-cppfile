#include<bits/stdc++.h>
using namespace std;

int n,num,k,t,max_ = 0;
vector<int> a[100005];
string s;

int zhuan(){
	int re = 0;
	for(int i = 2;i < s.size();i++){
		re = re * 10 + (s[i] - '0');
	}
	return re;
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d %d",&num,&k);
		while(k -- > 0){
			cin >> s;
			a[zhuan()].push_back(num);
		}
	}
	for(int i = 0;i <= 100000;i++){
		if(max_ < a[i].size()) max_ = a[i].size();
	}
	for(int i = 0;i <= 100000;i++){
		if(a[i].size() == max_){
			printf("MD%05d %d\n",i,a[i].size());
			for(auto && p : a[i]){
				printf("%04d\n",p);
			}
			return 0;
		}
	}

	return 0;
}

