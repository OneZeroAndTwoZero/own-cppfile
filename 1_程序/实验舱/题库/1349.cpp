#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int sum = 0;
	bool yj = 1;
	for(int i = 0;i < s.size() - 1;i++){
		if(s[i] == 'O'){
			if(s[i + 1] == 'K'){
				sum ++;
				i ++;
			}else{
				if(yj){
					yj = 0;
					sum ++;
				}
			}
		}
	}
	cout << sum << endl;

	return 0;
}

