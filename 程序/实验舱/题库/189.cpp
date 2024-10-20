#include<bits/stdc++.h>
using namespace std;

int main(){
	for(int i = 1;i <= 256;i++){
		if(ceil(sqrt(i)) * ceil(sqrt(i)) == i){
			cout << i << endl;
		}
	}

	return 0;
}

