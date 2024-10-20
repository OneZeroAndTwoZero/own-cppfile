#include<bits/stdc++.h>
using namespace std;

int a,b,c,L,R,num = 0;

int main(){
	cin >> a >> b >> c >> L >> R;
	for(int i = L;i <= R;i++){
		if(i % a == 0 || i % b == 0 || i % c == 0){
			num += 1;
		}
	}
	cout << num << endl;
	
	return 0;
} 
