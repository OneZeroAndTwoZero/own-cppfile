#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a,b;
	int point,num_star = 0;
	for(int i = 1;i <= n;i++){
		cin >> a >> b;
		point = 5 * a - 3 * b;
		if(point > 40){
			num_star += 1;
		}
	}
	cout << num_star;
	if(num_star == n){
		cout << "+" << endl;
	}
	
	return 0;
}
