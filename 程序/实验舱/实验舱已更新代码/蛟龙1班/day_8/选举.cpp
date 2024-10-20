#include<bits/stdc++.h>
using namespace std;

int main(){
	long long x,y;
	cin >>  x >> y;
	int a,b,c;
	cin >> a >> b >> c;
	long long g;
	int i = 1;
	while(1){
		if(i % a == 0 && i % b == 0 && i % c == 0){
			g = i;
			break;
		}
		i++;
	}
	for(long long j = x;j <= y;j += g){
		cout << j << endl;
	}
	
	return 0;
} 
