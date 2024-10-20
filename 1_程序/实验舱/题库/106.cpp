#include<bits/stdc++.h>
using namespace std;

int main(){
	int rabbit;
	int j = 0,y = 0,e = 0,a;
	cin >> rabbit >> a;
	int tem = rabbit;
	for(int i = 0;i <= rabbit;i++){
		j += 2;
		tem --;
		y = 0,e = 0;
		int tem2 = tem;
		for(int k = i + 1;k <= rabbit;k += 2){
			y += 3;
			tem2 -= 2;
			if(tem2 % 5 != 0) continue;
			e = tem2 / 5 * 7;
			if(j + y + e == a && tem2 >= 0)cout << j << " " << y << " " << e << endl;
			
		}
		
	}
	
	
	return 0;
} 
