#include<bits/stdc++.h>
using namespace std;

int main(){
	int x;
	cin >> x;
	for(int k = 1;k <= 2;k++){
		int L,R;
		cin >> L >> R;
		int sum = 0;
		for(int i = L;i <= R;i++){
			int  tem = i;
			while(tem){
				int j = tem % 10;
				if(j == x) sum += 1;
				tem /= 10;
			}
		}
		cout << sum << endl;
    }
	
	return 0;
}
