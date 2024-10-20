#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,ji,y,e,sum;
	cin >> t >> sum;
	for(int i = 1;i < t;i++){
		ji = 2 * i;
		for(int j = 1;j * 2 < t - i;j ++){
		    y = 3 * j;
		    if((t - i - 2 * j) % 5 != 0){
		    	continue;
			} 
			e = (t - i - 2 * j) / 5 * 7;
			if(ji + y + e == sum){
				cout << ji << " " << y << " " << e << endl;
			}
		}
	}

	return 0;
}

