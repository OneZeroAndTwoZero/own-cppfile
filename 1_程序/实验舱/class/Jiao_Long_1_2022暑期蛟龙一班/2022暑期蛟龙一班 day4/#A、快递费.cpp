#include<bits/stdc++.h>
using namespace std;

int g,gh,q;
char r;
double cz_num;

int main(){
	cin >> g >> r;
	gh = g - 1000;
	double cz_num = ceil((double)gh / 500.0);
	int j = 0;
	if(r == 'y'){
		j = 5;
	}
	if(g <= 1000){
		q = 8 + j;
	}else{
		q = 8 + 4 * cz_num +j;
	}
	cout << q << endl;
	
	return 0;
}
