#include<bits/stdc++.h>
using namespace std;

int a[10005] = {0};

int main(){
	int n;
	cin >> n;
	int t_0 = 1;
	int t_1 = ceil((double)n / 2.0) + 1;
	for(int i = 0;i < n;i++){
		if(i % 2 == 0){
			cout << t_0 + i / 2 << " ";
		}else{
			cout << t_1 + i / 2 << " ";
		}
	}
	cout << endl;

	return 0;
}

