#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,k;
	cin >> a >> k;
	int i = 0,y = 1;
	while(i < k){
		int tem = y;
		while(tem){
			if(tem % 10 == a) i ++;
			if(i == k){
				cout << y << endl;
				return 0;
			}
			tem /= 10;
		}
		y++;
	}

	return 0;
}

