#include<bits/stdc++.h>
using namespace std;

int n,mid,l,r,num1,num2,ans;
int a[1000005] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a + n);
	if(a[0] == a[n - 1]){
		printf("0 %d %d",a[0],a[0]);
		return 0;
	}
	mid = (n + 1) / 2 - 1;
	num1 = a[mid];
	for(int i = 1;i <= mid;i ++){
		if(a[mid + i] != num1){
			num2 = a[mid + i];
			break;
		}
		if(a[mid - i] != num1){
			num2 = a[mid - i];
			break;
		}
	}
	for(int i = 0;i < n;i ++){
		if(a[i] != num1 && a[i] != num2){
			l ++;
		}else{
			break;
		}
	}
	for(int i = n - 1;i >= 0;i --){
		if(a[i] != num1 && a[i] != num2){
			r ++;
		}else{
			break;
		}
	}
	if(r >= l) ans = r * 2;
	else ans = (l - 1) * 2 + 1;
	printf("%d %d %d\n",ans,min(num1,num2),max(num1,num2));

	return 0;
}

