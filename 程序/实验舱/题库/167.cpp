#include<bits/stdc++.h>
using namespace std;

int cz(int i,int j,int n){
	int s = i + 1;
	int x = n - i;
	int z = j + 1;
	int y = n - j;
	return min({s,x,z,y});
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cout << cz(i,j,n) << " ";
		}
		cout << endl;
	}

	return 0;
}

