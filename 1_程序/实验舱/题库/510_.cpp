#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	printf("%d = ",n);
	bool f = 1;
	for(int i = 2;i <= 2 * n;i++){
		while(n % i == 0){
			if(f){
				cout << i;
				f = !f;
			}else{
				printf(" * %d",i);
			}
			n /= i;
		}
	}

	return 0;
}

