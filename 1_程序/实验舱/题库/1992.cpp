#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t --){
		int n,s,k,x;
		cin >> n >> s >> k >> x;
		int c = ceil((double)n / k);
		int yuan = s * c;
		int c_h = c - x / s;
		int xian = s * (c - c_h);
		if(c_h % 2 == 1){
			if(xian < x){
				xian += s;
			}else{
				x += s;
			}
			c_h --;
		}
		int hou = max(xian,x) + (c_h / 2) * s;
		if(hou < yuan){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}

	return 0;
}

