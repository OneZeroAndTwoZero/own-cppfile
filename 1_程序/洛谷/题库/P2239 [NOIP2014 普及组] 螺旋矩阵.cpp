#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	int n,i,j;
	cin >> n >> i >> j;
	i --,j --;
	int s = 0,z = 0,x = n - 1,y = n - 1;
	int ans = 0;
	while(s <= x || z <= y){
		if(s == i){
			ans += j - z + 1;
			cout << ans << endl;
			return 0;
		}
		ans += y - z + 1;
		s ++;
		if(y == j){
			ans += i - s + 1;
			cout << ans << endl;
			return 0;
		}
		ans += x - s + 1;
		y --;
		if(x == i){
			ans += y - j + 1;
			cout << ans << endl;
			return 0;
		}
		ans += y - z + 1;
		x --;
		if(z == j){
			ans += x - i + 1;
			cout << ans << endl;
			return 0;
		}
		ans += x - s + 1;
		z ++;
	}

	return 0;
}

