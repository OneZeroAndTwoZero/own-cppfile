#include<bits/stdc++.h>
using namespace std;

int L,M;
int l[100005] = {0};
int s[100005],e[100005];

int main(){
	cin >> L >> M;
	int sl = L + 1;
	for(int i = 0;i < M;i++){
		cin >> s[i] >> e[i];
	}
	for(int i = 0;i < M;i++){
		for(int j = s[i];j <= e[i];j++){
			if(l[j] == 0){
				l[j] = 1;
				sl -= 1;
			}
		}
	}
	cout << sl << endl;
	
	return 0;
} 
