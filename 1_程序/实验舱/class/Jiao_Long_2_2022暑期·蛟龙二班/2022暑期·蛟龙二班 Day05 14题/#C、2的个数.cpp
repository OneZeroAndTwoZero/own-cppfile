#include<bits/stdc++.h>
using namespace std;

int L,R;
int sum = 0;

int main(){
	cin >> L >> R;
	for(int i = L;i <= R;i++){
		int  tem = i;
		while(tem){
			int x = tem % 10;
			if(x == 2) sum += 1;
			tem /= 10;
		}
	}
	cout << sum << endl;
	
	return 0;
}
