#include<bits/stdc++.h>
using namespace std;

struct p{
	string name;
	int fx;
};

p a[100005];

int main(){
	int n,m;
	cin >> n >> m;
	int now = 0;
	for(int i = 0;i < n;i++){
		cin >> a[i].fx >> a[i].name;
	}
	for(int i = 0;i < m;i++){
		int c,d;
		cin >> c >> d;
		if((a[now].fx ^ c) == 1){
			now += d;
			now %= n;
		}else{
			now -= d;
			while(now < 0) now += n;
			now %= n;
		}
	}
	cout << a[now].name << endl;

	return 0;
}

