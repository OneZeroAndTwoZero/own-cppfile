#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	if(a % 2 == 0){
		for(int i = 0;i < 100;i = i){
			while(1){
				i = i;
				if(i == i + 1) break;
			} 
			if(i == 100000000){
			    cout << -5 << endl;
			} 
		} 
	}else{
		cout << 6666 << endl;
	}

	return 0;
}

