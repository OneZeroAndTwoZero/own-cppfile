#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	cin >> N >> M;
	int g[N] = {0};
	for(int i = 0;i < N;i++){
		int p[M] = {0};
		for(int j = 0;j < M;j++){
			cin >> p[j];
			cout << p[j] << "*" << endl;
		}
	}

	return 0;
}

