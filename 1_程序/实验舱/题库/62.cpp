#include<bits/stdc++.h>
using namespace std;

int main(){
	double a,b,c;
	cin >> a >> b >> c;
	if(a == 0){
		cout << "no" << endl;
	}else{
		double x = (c - b) / a;
		printf("%.2lf\n",x);
	}
	
	return 0;
}
