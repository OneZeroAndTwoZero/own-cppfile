#include<bits/stdc++.h>
using namespace std;

struct time_{
	int id;
	int h1,m1;
	int h2,m2;
	int h,m;
	bool operator < (const time_ &t) const{
		//if(h != t.h) return h < t.h;
		if(m != t.m) return m < t.m;
		//if(h1 != t.h1) return h1 < t.h1;
		if(m1 != t.m1) return m1 < t.m1;
		return id < t.id;
	}
};

time_ t[1002];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		scanf("%d:%d %d:%d",&t[i].h1,&t[i].m1,&t[i].h2,&t[i].m2);
		t[i].h = t[i].h1 + t[i].h2,t[i].m = t[i].m1 + t[i].m2;
		t[i].m1 = t[i].m1 + t[i].h1 * 60;
		t[i].m = t[i].m + t[i].h * 60;
		t[i].id = i + 1;
	}
	sort(t,t + n);
	for(int i = 0;i < n;i++){
		cout << t[i].id << endl;
	}

	return 0;
}

