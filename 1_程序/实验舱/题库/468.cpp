#include<bits/stdc++.h>
using namespace std;

int toeight(int a){
	int s = 0;
	int quan = 1;
	while(a){
		s += (a % 8) * quan;
		quan *= 10;
		a /= 8;
	}
	return s;
} 

int main(){
	int a;
	cin >> a;
	int s = toeight(a);
	cout << s << endl;

	return 0;
}

