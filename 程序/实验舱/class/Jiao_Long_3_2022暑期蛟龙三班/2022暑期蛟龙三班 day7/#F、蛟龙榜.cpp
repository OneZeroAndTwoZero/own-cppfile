#include<bits/stdc++.h>
using namespace std;

struct ti{
	string name;
	int score,time_;
	bool operator <(const ti &t) const{
		if(score != t.score) return score > t.score;
		if(time_ != t.time_) return time_ < t.time_;
		return name < t.name;
	}
};

int n,t1,t2,s,t;
ti a[100005];

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		cin >> a[i].name;
		s = 0,t = 0;
		for(int j = 0;j < 4;j++){
			scanf("%d %d",&t1,&t2);
			t += t1,s += t2;
		}
		a[i].score = s,a[i].time_ += t;
	}
	sort(a,a + n);
	for(int i = 0;i < n;i++){
		cout << a[i].name << endl;
	}

	return 0;
}

