#include<bits/stdc++.h>
using namespace std;

map<int,int> m;

bool r(int a){
	if(a % 400 == 0 || (a % 4 == 0 && a % 100 != 0)){
		return 1;
	}
	return 0;
}

int main(){
	m[1] = 31,m[2] = 28,m[3] = 31,m[4] = 30,m[5] = 31,m[6] = 30;
	m[7] = 31,m[8] = 31,m[9] = 30,m[10] = 31,m[11] = 30,m[12] = 31;
	int y,n;
	while(cin >> y >> n){
		printf("%04d-",y);
		int now = 0,yq = 0;
		for(int i = 1;i <= 12;i++){
			now += m[i];
			if(i == 2 && r(y)){
				now ++;
			}
			if(now >= n){
				printf("%02d-",i);
				printf("%02d\n",n - yq);
				break;
			}
			yq += m[i];
			if(i == 2 && r(y)){
				yq ++;
			}
		}
	}

	return 0;
}

