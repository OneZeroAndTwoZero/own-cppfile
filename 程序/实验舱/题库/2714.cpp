#include<bits/stdc++.h>
using namespace std;

string name[105];
int jg[105] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> name[i];
		cin >> jg[i];
	}
	int max = -1;
	for(int i = 0;i < n;i++){
		if(jg[i] > max) max = jg[i];
	}
	for(int i = 0;i < n;i++){
		if(jg[i] == max){
			cout << name[i] << endl;
			return 0;
		}
	}

	return 0;
}

