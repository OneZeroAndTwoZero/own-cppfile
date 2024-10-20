#include<bits/stdc++.h>
using namespace std;

int main(){
	int a1,a2;
	cin >> a1 >> a2;
	int time = 0;
	while(a1 > 0 && a2 > 0){
		if(a1 < 2 && a2 < 2){
			break;
		}
		if(a2 >= a1){
			a1 += 1;
			a2 -= 2;
			time += 1;
		}else{
			a1 -= 2;
			a2 += 1;
			time += 1;
		}
	}
	cout << time << endl;
	
	return 0;
}
