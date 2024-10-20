int ss[2000005] = {0};
int y = 1;

bool ok(int n){
	if(n == 2){
		return 1;
	}
	if(n < 2 || n % 2 == 0) return 0;
	long long i = 0;
	while(ss[i] != 0 && ss[i] * ss[i] <= n){
		if(n % ss[i] == 0) return 0;
		i++;
	}
	ss[y ++] = n;
	return 1;
}

int main(){
	ss[0] = 2;
	for(int i = 1;i <= n;i++){
		if(ok(i)) cout << i << " ";
	}

	return 0;
}
