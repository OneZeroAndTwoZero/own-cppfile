#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d;
	int ans = 0;
	cin >> a >> b >> c >> d;
	if(a < c){
		if(b >= c && d > b){
			ans = d - a + 1;
		}else if(d <= b){
			ans = b - a + 1;
		}else{
			ans = b - a + d - c + 2;
		}
	}else{
		if(d >= a && b > d){
			ans = b - c + 1;
		}else if(b <= d){
			ans = d - c + 1;
		}else{
			ans = d - c + b - a + 2;
		}
	}
	cout << ans << endl;

	return 0;
}

