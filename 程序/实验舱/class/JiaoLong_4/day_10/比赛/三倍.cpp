#include<bits/stdc++.h>
using namespace std;

int t,sum = 0;
string s;
int a[10] = {0};

int main(){
	scanf("%d",&t);
	while(t --){
		sum = 0;
		for(int i = 0;i < 10;i++) a[i] = 0;
		cin >> s;
		for(int i = 0;i < s.size();i ++){
			a[s[i] - '0'] ++;
			sum += s[i] - '0';
		}
		if(sum % 3 == 0){
			puts("0");
		}else if(sum % 3 == 1){
			if((a[1] || a[4] || a[7]) && s.size() > 1){
				puts("1");
			}else if((a[2] > 1 || a[5] > 1 || a[8] > 1) && s.size() > 2){
				puts("2");
			}else if((a[2] && a[5] || a[2] && a[8] || a[5] && a[8]) && s.size() > 2){
				puts("2");
			}else{
				puts("-1");
			}
		}else if(sum % 3 == 2){
			if((a[2] || a[5] || a[8]) && s.size() > 1){
				puts("1");
			}else if((a[1] > 1 || a[4] > 1 || a[7] > 1) && s.size() > 2){
				puts("2");
			}else if((a[1] && a[4] || a[1] && a[7] || a[4] && a[7]) && s.size() > 2){
				puts("2");
			}else{
				puts("-1");
			}
		}
	}

	return 0;
}

