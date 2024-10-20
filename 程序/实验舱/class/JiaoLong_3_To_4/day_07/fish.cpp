#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	double s,x;
	for(int i = 0;i < t;i++){
		cin >> s >> x;
		double d = s - x;
		if(d > 100){
			cout << "n" << endl;
			continue;
		}
		double v = 10;
		while(1){
			d -= v;
		    if(d <= 0){
		    	double need = 2 * x + d;
		    	if(need > v * 0.9){
		    		cout << "y" << endl;
		    		break;
				}else{
					cout << "n" <<endl;
					break;
				}
			}
			v = v * 0.9;
		}
		
	}

	return 0;
}

