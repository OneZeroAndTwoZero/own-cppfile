#include<bits/stdc++.h>
using namespace std;

int main(){
	double A,B;
	cin >> A >> B;
	if(B == 0){
		cout << "NAN" << endl;
		return 0;
	}
	double ans = A / B;
	printf("%.2lf",ans);

	return 0;
}

