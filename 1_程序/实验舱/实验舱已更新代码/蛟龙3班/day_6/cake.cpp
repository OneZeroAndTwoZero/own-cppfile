#include<bits/stdc++.h>
using namespace std;

struct cake{
	int id,t;
};

bool cmp(cake a,cake b){
	if(a.t != b.t) return a.t < b.t;
	return a.id < b.id;
}

cake ca[1002];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		ca[i].id = i + 1;
		cin >> ca[i].t;
	}
	sort(ca,ca + n,cmp);
	for(int i = 0;i < n;i++){
		cout << ca[i].id << " ";
	}

	return 0;
}

