#include<bits/stdc++.h>
using namespace std;

int main(){
	int L,R;
	cin >> L >> R;
	if(L > R){
		cout << "·Ç·¨ÊäÈë" << endl;
		return 0; 
	}
	int sum = 0;
	for(int i = L;i <= R;i++){
		int tem = i;
		while(tem){
			if(tem % 10 == 2){
				sum ++;
			}
			tem /= 10;
		}
	}
	for(int i = 0;;i++){
		if(pow(2,i) == sum || (pow(2,i) < sum && pow(2,i + 1) > sum)){
			cout << i << endl;
			return 0; 
		}
	}

	return 0;
}

