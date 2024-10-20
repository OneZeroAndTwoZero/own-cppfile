#include<bits/stdc++.h>
using namespace std;

int main(){
	for(int i = 1;i <= 30;i++){
		for(int j = 1;j <= 30;j++){
			printf("%2d ",(i ^ j));
		}
		cout << endl;
	}

	return 0;
}

