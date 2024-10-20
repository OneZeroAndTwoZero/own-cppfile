#include<bits/stdc++.h>
using namespace std;

string s;
int n,min_ = 0,max_ = 0,t = 0,ans;
bool o = 0;
char r = '0';

int main(){
	cin >> n;
	cin >> s;
	if(s[0] != 'F'){
		r = s[0];
	}else{
		t = 1;
		o = 1;
	}
	for(int i = 1;i < s.size();i++){
		if(s[i] == 'F'){
			t ++;
		}else{
			if(s[i] == s[i - 1]){
				max_ ++,min_ ++;
			}else if(t > 0){
				if(r == '0'){
					max_ += t;
				}else if(r == s[i]){
					if(t % 2 == 1){
						max_ += t + 1;
					}else{
						max_ += t + 1;
						min_ += 1;
					}
				}else{
					if(t % 2 == 1){
						max_ += t;
						min_ += 1;
					}else{
						max_ += t;
					}
				}
			}
			t = 0;
			r = s[i];
		}
	}
	if(t > 0){
		max_ += t;
		o = 1;
	}
	if(o){
		ans = max_ - min_ + 1;
		cout << ans << endl;
		for(int i = min_;i <= max_;i++){
			cout << i << endl;
		}
	}else{
		ans = ceil((max_ - min_ + 1) / 2.0);
		cout << ans << endl;
		for(int i = min_;i <= max_;i ++){
			if((i - min_) % 2 == 0) cout << i << endl;
		}
	}

	return 0;
}

