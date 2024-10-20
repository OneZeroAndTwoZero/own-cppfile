#include<bits/stdc++.h>
using namespace std;

struct pig{
	int x,y,fx;
};

bool cmp(pig a,pig b){
	if(a.y != b.y){
		return a.y < b.y;
	}
}

pig a[100005];
int sl[100005] = {0};

bool ok(int st,int l){
	int left = 0,right = 0;
	int z_max = 11451419,y_min = -11451419;
	for(int i = st;i < st + l;i++){
		if(a[i].fx == 0){
			left ++;
			if(a[i].x > z_max) z_max = a[i].x;
		}else if(a[i].fx == 1){
			right ++;
			if(a[i].x < y_min) y_min = a[i].x;
		}
	}
	if(left >= 2 || right >= 2) return 1;
	if(z_max > y_min) return 1;
	return 0;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int x,y,fx;
		cin >> a[i].x >> a[i].y >> a[i].fx;
		sl[a[i].y] ++;
	}
	sort(a,a+n,cmp);
	int ans = 0;
	int k = 0,z = 0;
	while(k < n){
		if(a[k].y == z){
			if(sl[z] >= 2 && ok(k,sl[z])){
				ans++;
			}
			k += sl[z];
		}
		z++;
	}
	cout << ans << endl;

	return 0;
}


