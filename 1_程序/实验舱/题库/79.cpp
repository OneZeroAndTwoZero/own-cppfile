#include<bits/stdc++.h>
using namespace std;

int main(){
	int h1,h2,m1,m2,s1,s2;
	cin >> h1 >> m1 >> s1;
	cin >> h2 >> m2 >> s2;
	int cha_h,cha_m,cha_s;
	cha_h = h1 - h2 < 0 ? h1 - h2 + 12 : h1 - h2;
	if(m1 - m2 > 0){
		cha_m = m1 - m2;
	}else{
		if(cha_h == 0){
			cha_h = 11;
			cha_m = m1 - m2 + 60;
		}else{
			cha_h --;
			cha_m = m1 - m2 + 60;
		}
	}
	if(s1 - s2 > 0){
		cha_s = s1 - s2;
	}else{
		if(cha_m == 0){
			if(cha_h == 0){
				cha_h = 11;
			}
			cha_m = 59;
			cha_s = s1 - s2 + 60;
		}else{
			cha_m --;
			cha_s = s1 - s2 + 60;
		}
	}
	int ans = cha_h * 3600 + cha_m * 60 + cha_s;
	cout << ans << endl;

	return 0;
}

