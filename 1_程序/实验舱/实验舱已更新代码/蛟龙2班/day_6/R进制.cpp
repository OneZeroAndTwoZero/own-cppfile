#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,r;
	cin >> a >> r;
	int temp = a;
	int b[200];
	int i = 0;
	while(temp){
		b[i] = temp % r;
		temp /= r;
		i++;
	}
	for(int j = i - 1;j >= 0;j--){
		if(b[j] < 10){
		    cout << b[j];
		}else{
			cout << (char)(b[j] + 'A' - 10);
		}
	}
	
	return 0;
} 
