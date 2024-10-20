#include<bits/stdc++.h>
using namespace std;

int n;
int sum = 0;

int main(){
	cin >> n;
	for(int i = 1;i <= n;i++){
		int tem = i;
		int s = 0;
		while(tem){
			s *= 10;
			s += tem % 10;
			tem /= 10;
		}
		if(i == s){
			sum += 1;
		}
    }
    cout << sum << endl;
	
	return 0;
}
