#include<bits/stdc++.h>
using namespace std;

bool su(int a){
	if(a < 2 || (a % 2 == 0 && a != 2)) return 0;
	int n = sqrt(a);
	for(int i = 2;i <= n;i++){
		if(a % i == 0) return 0;
	}
	return 1;
}

int main(){
	int n;
	cin >> n;
	printf("%d = ",n);
	while(n != 1){
		int l = sqrt(n);
		for(int i = 0;i <= l;i++){
			if(n % i == 0){
				if(su(i)){
					cout << i;
					if(n / i != 1){
						cout << " " << '*' << " ";
					}else{
						return 0;
					}
					n /= i;
					break;
				}
			}
		}
	}

	return 0;
}

