#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	for(int i = 1;;i ++){
		if(i % 3 == a && i % 5 == b && i % 7 == c && i >= 100){
			cout << i << endl;
			return 0;
		}
	}	

	return 0;
}

