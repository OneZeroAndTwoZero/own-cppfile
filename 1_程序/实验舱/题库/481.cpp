#include<bits/stdc++.h>
using namespace std;

int w[100005] = {0};

int main(){
	int x;
	cin >> x;
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> w[i];
	}
	int no = 0;
	int aqtg = 0;
	for(int i = 0;i < n;i++){
		no += w[i];
		if(i > 3){
			no -= w[i - 4];
		}
		if(no <= x){
			aqtg ++;
		}else{
			break;
		}
	}
	cout << aqtg << endl;

	return 0;
}

