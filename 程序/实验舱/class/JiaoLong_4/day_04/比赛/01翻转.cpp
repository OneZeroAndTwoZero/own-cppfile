#include<bits/stdc++.h>
using namespace std;

string s;
int j,o;
int n;

int main(){
	j = 0,o = 0;
	cin >> s;
	n = s.size();
	for(int i = 1;i <= n;i++){
		if(s[i - 1] == '1'){
			if(i & 1) j ++;
			else o ++;
		}
	}
	for(int i = 1;i <= n;i++){
		if(i & 1){
			if(j > 0){
				j --;
				printf("1");
			}else{
				printf("0");
			}
		}else{
			if(o > 0){
				o --;
				printf("1");
			}else{
				printf("0");
			}
		}
	}

	return 0;
}

