#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

int main(){
	int n;
	cin >> n;
	int k;
	cin >> k;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
    sort(a,a + n);
    long long ans = 0;
    for(int i = 0;i < n;i++){
    	if(a[i] > 0){
    		if(k % 2 == 1){
    			if(i > 0){
    				ans -= 2 * min(a[i],a[i - 1]);
				}else{
					ans -= 2 * a[i];
				}
				k = 0;
			}
			ans += a[i];
		}else{
			if(k > 0){
				k --;
				ans += abs(a[i]);
				a[i] = abs(a[i]);
			}else{
				ans += a[i];
			}
		}
	}
	cout << ans << endl;

	return 0;
}

