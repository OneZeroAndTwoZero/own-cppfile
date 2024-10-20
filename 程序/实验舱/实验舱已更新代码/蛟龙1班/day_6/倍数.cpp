#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,L,R;
	cin >> a >> b >> c >> L >> R;
	int num = 0;
	for(int i = L;i <= R;i++){
		if(i % a == 0 || i % b == 0 || i % c == 0){
			num += 1;
		}
	}
	cout << num << endl;
	
	return 0;
} 
