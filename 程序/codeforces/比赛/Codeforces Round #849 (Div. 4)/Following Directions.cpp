#include<bits/stdc++.h>
using namespace std;

int t,n;
string s;

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d",&n);
		cin >> s;
		bool r = 0;
		int x = 0,y = 0;
		for(int i = 0;i < n;i++){
			if(s[i] == 'L'){
				y --;
			}else if(s[i] == 'R'){
				y ++;
			}else if(s[i] == 'U'){
				x ++;
			}else{
				x --;
			}
			if(x == 1 && y == 1){
				r = 1;
				break;
			}
		}
		if(r){
			puts("YES");
		}else{
			puts("NO");
		}
	}

	return 0;
}

