#include<bits/stdc++.h>
using namespace std;

int x,L,R;

int main(){
	cin >> x;
	for(int k = 1;k <= 2;k++){
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
