#include<bits/stdc++.h>
using namespace std;

int toeight(int a){
	int s[50] = {0};
	int i = 0;
	while(a){
		s[i] = a % 8;
		a /= 8;
		i++;
	}
	for(int j = i - 1;j >= 0;j--){
		cout << s[j];
	}
	return 0;
}

int main(){
	int a;
	cin >> a;
	toeight(a);
	
	
	return 0;
} 
