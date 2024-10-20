#include<bits/stdc++.h>
using namespace std;

double m[6] = {-216.0475144,16.2606339,-0.002388645,-0.00113732,0.00000701863,-1.291e-8};
double f[6] = {594.31747775582,-27.23842536447,0.82112226871,-0.00930733913,0.00004731582,-9.054e-8};

int main(){
	char xb;
	cin >> xb;
	double a,b,c;
	cin >> a >> b >> c;
	double he = a + b + c;
	double x;
	cin >> x;
	double Wilks_Coefficient;
	if(xb == 'M'){
	    Wilks_Coefficient = 500.0 / (m[0] + m[1] * x + m[2] * x * x + m[3] * x * x * x + m[4] * x * x * x * x + m[5] * x * x * x * x * x);
	}else{
		Wilks_Coefficient = 500.0 / (f[0] + f[1] * x + f[2] * x * x + f[3] * x * x * x + f[4] * x * x * x * x + f[5] * x * x * x * x * x);
	}
	double ans = Wilks_Coefficient * he;
	cout << ceil(ans) << endl;
	if(ans >= 0 && ans <= 200){
		cout << "Un-trained" << endl;
	}else if(ans > 200 && ans <= 238){
		cout << "Novice" << endl;
	}else if(ans > 238 && ans <= 326){
		cout << "Intermediate" << endl;
	}else if(ans > 326 && ans <= 414){
		cout << "Advanced" << endl;
	}else if(ans > 414){
		cout << "Elite" << endl;
	}
	
	return 0;
}

