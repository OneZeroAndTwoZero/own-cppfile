#include<bits/stdc++.h>
using namespace std;

int tree[1005] = {0};

int main(){
	int n,k;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> tree[i];
	}
	cin >> k;
	int k_f = pow(2,k - 1);
	int k_l = pow(2,k) - 1;
	if(n < k_f){
		cout << "EMPTY" << endl;
	}else{
		for(int i = k_f;i <= k_l && i <= n;i++){
			cout << tree[i - 1] << " ";
		}
	}
	
	return 0;
}
