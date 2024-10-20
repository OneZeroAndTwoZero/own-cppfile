#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	long long a,b;
	cin >> t;
	for(int i = 0;i < t;i++){
		cin >> a >> b;
		if(a <= 0 && b >= 0){
			cout << "Zero" << endl;
			continue;
		}else if(a > 0 && b > 0){
			cout << "Positive" << endl;
			continue;
		}else if(a < 0 && b < 0){
			if(abs(a - b) % 2 == 0)
		        cout << "Negative" << endl;
		    else
		        cout << "Positive" << endl;
		}
	}

	return 0;
}

