#include<bits/stdc++.h>
using namespace std;

struct tx{
	string name;
	int time_,point;
	bool operator < (const tx &a) const{
		if(point != a.point) return point > a.point;
		if(time_ != a.time_) return time_ < a.time_;
		return name < a.name;
	}
}a[105];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i].name;
		int point_tem,time_tem;
		a[i].point = 0,a[i].time_ = 0;
		for(int j = 0;j < 4;j++){
			cin >> time_tem >> point_tem;
			a[i].point += point_tem,a[i].time_ += time_tem;
		}
	}
	sort(a,a + n);
	for(int i = 0;i < n;i++){
		cout << a[i].name << endl;
	}

	return 0;
}

