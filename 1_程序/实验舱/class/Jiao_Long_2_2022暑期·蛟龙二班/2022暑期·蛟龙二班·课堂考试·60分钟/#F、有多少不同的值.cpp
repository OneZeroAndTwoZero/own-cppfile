#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	int size = ceil((double)N/30*31) + 1;
	int a[size] = {};
	for(int i = 1;i <= N;i++){
		int ans = floor(i / 2.0) + floor(i / 3.0) + floor(i / 5.0);
		a[ans]++;
	}
	int num_ans = 0;
	for(int i = 0;i < size;i++){
		if(a[i] != 0){
			num_ans++;
		}
	}
	cout << num_ans << endl;
	
	return 0;
}
