#include<bits/stdc++.h>
using namespace std;

int t;
string a,b,ans;
int num1,num2,now;
bool l = 1;

int main(){
	cin >> t;
	while(t --){
		cin >> a >> b;
		num1 = num2 = 0;
		now = 0;
		l = 1;
		ans = "";
		for(int i = 0;i < a.size();i++){
			if(l){
				if(now >= b.size() || a[i] != b[now]){
					ans = ans + "*";
					num2 ++;
					l = 0;
				}
			}
			for(int j = now;j < b.size();j++){
				if(a[i] == b[j]){
					ans = ans + a[i];
					now = j + 1;
					num1 ++;
					l = 1;
					break;
				}
			}
		}
		if(now < b.size() - 1 && l){
			ans = ans + "*";
			num2 ++;
		}
		if(num1 >= num2){
			cout << "YES\n";
			cout << ans << endl;
		}else{
			swap(a,b);
			num1 = num2 = 0;
			now = 0;
			l = 1;
			ans = "";
			for(int i = 0;i < a.size();i++){
				if(l){
					if(now >= b.size() || a[i] != b[now]){
						ans = ans + "*";
						num2 ++;
						l = 0;
					}
				}
				for(int j = now;j < b.size();j++){
					if(a[i] == b[j]){
						ans = ans + a[i];
						now = j + 1;
						num1 ++;
						l = 1;
						break;
					}
				}
			}
			if(now < b.size() - 1 && l){
				ans = ans + "*";
				num2 ++;
			}
			if(num1 >= num2){
				cout << "YES\n";
				cout << ans << endl;
			}else{
				cout << "NO\n";
			}
		}
	}

	return 0;
}

