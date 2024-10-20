#include<bits/stdc++.h>
using namespace std;

char a[100][100];
string s;
int n;
	
int main(){
	cin >> n >> s;
	int h = s.size() / n,k = 0;
	for(int i = 0;i < h;i++){
		if(i % 2 == 0){
			for(int j = 0;j < n;j++){
				a[i][j] = s[k++];
			}
		}else{
			for(int j = n - 1;j >= 0;j--){
				a[i][j] = s[k++];
			}
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < h;j++){
			cout << a[j][i];
		}
	}

	return 0;
}

