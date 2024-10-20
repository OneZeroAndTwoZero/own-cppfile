#include<bits/stdc++.h>
using namespace std;

struct node{
	int si,fi;
	bool operator <(const node &a)const{
		return fi < a.fi;
	}
};

int h,m,s;
int n,now = -1,ans = 0;
node a[10005];
char t;

int zhuan(){
	return s + m * 60 + h * 3600;
}

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> h >> t >> m >> t >> s;
		a[i].si = zhuan();
		cin >> h >> t >> m >> t >> s;
		a[i].fi = zhuan();
	}
	sort(a,a + n);
	for(int i = 0;i < n;i++){
		if(a[i].si >= now){
			ans ++;
			now = a[i].fi;
		}
	}
	cout << ans << endl;

	return 0;
}

