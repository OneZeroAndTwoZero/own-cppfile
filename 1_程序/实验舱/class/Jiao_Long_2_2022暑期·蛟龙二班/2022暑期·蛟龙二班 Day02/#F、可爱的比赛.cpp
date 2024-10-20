#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005];

int main(){
	cin >> n;
	for(int i = 0;i < n;i++) cin >> a[i];
	int most_s = -1,most;
	for(int k = 0;k < n;k++){
		int x = a[k];
	    int point = 0;
		for(int i = k+1;i < n;i++){
			if(a[i] < x){
				point += 1;
			}
		}
		cout << point << " ";
		if(point > most_s){
			most_s = point;
			most = k + 1;
		}
	}
	cout << endl;
	cout << most << endl;
	
	return 0;
}  
