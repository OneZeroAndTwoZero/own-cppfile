#include<bits/stdc++.h>
using namespace std;

struct ren{
	int id;
	int score;
};

bool cmp(ren a,ren b){
	if(a.score != b.score) return a.score > b.score;
	return a.id < b.id;
}

ren p[5002];

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> p[i].id >> p[i].score;
	}
	sort(p,p + n,cmp);
	int z = floor((double)m * 1.5) - 1;
	int s_l = p[z].score,sum = 0;
	cout << s_l << " ";
	for(int i = 0;i < n;i++){
		if(p[i].score >= s_l) sum ++;
	}
	cout << sum << endl;
	for(int i = 0;i < n;i++){
		if(p[i].score >= s_l) cout << p[i].id << " " << p[i].score << endl;
	}

	return 0;
}

