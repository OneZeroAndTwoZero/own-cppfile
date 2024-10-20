#include<bits/stdc++.h>
using namespace std;

int n,num = 0,ans,x,d;
int a[1000005] = {0},t[1000005] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
		if(!t[a[i]]) num ++;
		t[a[i]] ++;
	}
	sort(a,a + n);
	if(a[0] == a[n - 1]){
		printf("0 %d %d",a[0],a[0]);
		return 0;
	}
	bool o1 = 0,o2 = 0;
	for(int i = 0;i <= 1000002;i ++){
		if(t[i]){
			if(o1){
				x = t[i];
				break;
			}
			o1 = 1;
		}
	}
	for(int i = 1000002;i >= 0;i --){
		if(t[i]){
			if(o2){
				d = t[i];
				break;
			}
			o2 = 1;
		}
	}
	while(num >= 3){
		sort(a,a + n);
		ans ++;
		t[a[0]] --,t[x] ++;
		a[0] = x;
		cout << t[a[0]] << endl;
		if(!t[a[0]]){
			num --;
			for(int i = 0;i <= 1000002;i ++){
				if(t[i]){
					if(o1){
						x = t[i];
						break;
					}
					o1 = 1;
				}
			}
		}
		if(num <= 2) break;
		sort(a,a + n);
		ans ++;
		t[a[n - 1]] --,t[d] ++;
		a[n - 1] = d;
		if(!t[a[n - 1]]){
			num --;
			for(int i = 1000002;i >= 0;i --){
				if(t[i]){
					if(o2){
						d = t[i];
						break;
					}
					o2 = 1;
				}
			}
		}
	}
	sort(a,a + n);
	printf("%d %d %d\n",ans,a[0],a[n - 1]);

	return 0;
}

