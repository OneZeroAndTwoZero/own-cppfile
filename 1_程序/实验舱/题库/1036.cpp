#include<bits/stdc++.h>
using namespace std;

int a[6] = {0};
bool ok[10005] = {0};

int main(){
	int gs = 0;
	for(int i = 0;i <6;i++){
		cin >> a[i];
	}
	for(int i = 0;i <= a[0];i++){
		for(int j = 0;j <= a[1];j ++){
			for(int k = 0;k <= a[2];k ++){
				for(int y = 0;y <= a[3];y ++){
					for(int l = 0;l <= a[4];l ++){
						for(int g = 0;g <= a[5];g ++){
							int t = i + 2 * j + 3 * k + 5 * y + 10 * l + 20 * g;
							ok[t] ++; 
						}
					}
				}
			}
		}
	}
	for(int i = 1;i < 10005;i++){
		if(ok[i]) gs ++;
	}
	printf("Total=%d\n",gs);

	return 0;
}

