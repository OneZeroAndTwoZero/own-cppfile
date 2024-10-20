#include<bits/stdc++.h>
using namespace std;

double sum(int y1,int y2,double p,double r){
	if(y2 == y1) return p;
	return (sum(y1,y2 - 1,p,r)) * (1 + r / 100);
}

int main(){
	int y1,y2;
	double p,r;
	cin >> y1 >> p >> y2 >> r;
	cout << sum(y1,y2,p,r) << endl;

	return 0;
}

