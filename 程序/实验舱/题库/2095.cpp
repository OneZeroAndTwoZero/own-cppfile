#include<bits/stdc++.h>
using namespace std;

int main(){
	int h,s;
	cin >> h >> s;
	s = -1 * s;
	int sh = 0,x = -1 * h;
	string ss;
	cin >> ss;
	for(int i = 0;i < ss.size();i++){
		if(ss[i] == 'u'){
			s ++;
			s = min(sh,s);
		}else{
			s --;
			s = max(s,x);
		}
	}
	cout << abs(s) << endl;

	return 0;
}

