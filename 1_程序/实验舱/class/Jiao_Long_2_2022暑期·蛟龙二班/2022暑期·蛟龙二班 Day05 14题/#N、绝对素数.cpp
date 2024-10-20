#include<bits/stdc++.h>
using namespace std;

int m1,m2;
int sum = 0;

int main(){
	cin >> m1 >> m2;
	for(int i = m1;i <= m2;i++){
		int n = i;
		int p_1 = n;
		int p_2 = 0;
		int ws = 0;
		while(n){
			n = n/10;
			ws += 1;
		}
		n = p_1;
		while(n){
			int a = n%10;
			n = n/10;
			p_2 += a*pow(10,ws-1);
			ws -= 1;
		}
		bool r_1 = 1,r_2 = 1;
		for(int i = 2;i < p_1;i++){
			if(p_1 % i == 0){
				r_1 = 0;
			}
		}
		for(int j = 2;j < p_2;j++){
			if(p_2 % j == 0){
				r_2 = 0;
			}
		}
		if(r_1 && r_2){
			sum += 1;
		}
    }
    cout << sum << endl;
	
	return 0;
}
