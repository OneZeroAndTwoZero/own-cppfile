#include<bits/stdc++.h>
using namespace std;

int b[26] = {0};

int main(){
	string tem;
	while(cin >> tem){
		for(int i = 0;i < tem.size();i++){
			if(tem[i] >= 'a' && tem[i] <= 'z'){
				b[tem[i] - 'a'] ++;
			}
			if(tem[i] >= 'A' && tem[i] <= 'Z'){
				b[tem[i] - 'A'] ++;
			}
		}
	}
	int max = -1;
	for(int i = 0;i < 26;i++){
		if(b[i] > max) max = b[i];
	}
	for(int i = 0;i < 26;i++){
		if(b[i] == max){
			cout << (char)(i + 'a') << " " << b[i] << endl;
		}
	}

	return 0;
}

