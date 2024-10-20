#include<bits/stdc++.h>
using namespace std;

int main(){
	int h,s;
	cin >> h >> s;
	int sh = 0,x = h;
	string ss;
	cin >> ss;
	for(int i = 0;i < ss.size();i++){
		if(ss[i] == 'u'){
			if(s != 0) s--;
		}else{
			if(s != x) s++;
		}
	}
	cout << s << endl;

	return 0;
}

