#include<bits/stdc++.h>
using namespace std;

string s = "ABCDE",tem = "     ";
int n;

void a(){
	for(int i = 0;i < 5;i ++){
		s[i] = tem[i];
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	while(cin >> n){
		if(n == 1){
			for(int i = 0;i < 4;i ++){
				tem[i] = s[i + 1];
			}
			tem[4] = s[0];
			a();
		}else if(n == 2){
			for(int i = 1;i < 5;i ++){
				tem[i] = s[i - 1];
			}
			tem[0] = s[4];
			a();
		}else if(n == 3){
			swap(s[0],s[1]);
		}else{
			break;
		}
	}
	for(int i = 0;i < 5;i ++){
		cout << s[i] << " ";
	}

	return 0;
}
