#include<bits/stdc++.h>
using namespace std;

int a[1005] = {0};

int main(){
	int s1,s2,s3;
	cin >> s1 >> s2 >> s3;
	for(int i = 1;i <= s1;i++){
		for(int j = 1;j <= s2;j++){
			for(int k = 1;k <= s3;k++){
				a[i + j + k] ++;
			}
		}
	}
	int zd = -1;
	for(int i = 0;i < 1005;i++){
		zd = max(a[i],zd);
	}
	for(int i = 0;i < 1005;i++){
		if(a[i] == zd){
			cout << i << endl;
			return 0;
		}
	}

	return 0;
}

