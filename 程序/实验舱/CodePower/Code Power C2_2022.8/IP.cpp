#include<bits/stdc++.h>
using namespace std;

int toten(int a[]){
	int s = 0;
	int quan = 1;
	for(int i = 7;i >= 0;i--){
		s += a[i] * quan;
		quan = quan * 2;
	}
	return s;
}

int main(){
	for(int i = 0;i < 4;i++){
	    int a[8] = {0};
		for(int j = 0;j < 8;j++){
			a[j] = (int)(getchar() - '0');
		}
		int ten = toten(a);
		cout << ten;
		if(i != 3){
			cout << ".";
		}
	}

	return 0;
}

