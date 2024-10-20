#include<bits/stdc++.h>
using namespace std;

int a,r;
int b[200] = {0};
int i = 0;

int main(){
	cin >> a >> r;
	int temp = a;
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
