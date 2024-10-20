#include<bits/stdc++.h>
using namespace std;

int main(){
	for(int a = 0;a < 10;a++){
		for(int b = 0;b < 10;b++){
			for(int c = 0;c < 10;c++){
				if(101 * a + 20 * b + 101 * c == 1333) cout << a << " " << b << " " << c << endl;
			}
		}
	}

	return 0;
}

