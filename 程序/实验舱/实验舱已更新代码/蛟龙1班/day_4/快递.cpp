#include<bits/stdc++.h>
using namespace std;

int main(){
	int g;
	char r;
	cin >> g >> r;
	int gh = g - 1000;
	double cz_num = ceil((double)gh/500.0);
	int j = 0;
	if(r == 'y'){
		j = 5;
	} 
	int q;
	if(g <= 1000){
		q = 8 + j;
	}else{
		q = 8 + 4 * cz_num +j;
	}
	cout << q << endl;
	
	return 0;
}
