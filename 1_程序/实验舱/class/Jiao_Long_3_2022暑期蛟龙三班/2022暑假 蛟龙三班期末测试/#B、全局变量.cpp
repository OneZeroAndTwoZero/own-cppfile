#include<bits/stdc++.h>
using namespace std;

long long ans = 0;

void fun(int cnt,int n){
    if(cnt == 2 * n + 1) return;
    for (int i = 1; i <= cnt; i++) ans++;
    fun(cnt + 2,n);
}

int main(){
	int n;
	cin >> n;
	fun(1,n);
	cout << ans << endl;
	
	return 0;
} 
