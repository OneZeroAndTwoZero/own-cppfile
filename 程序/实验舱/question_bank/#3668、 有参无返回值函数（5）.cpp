void printNumber(int n){
	for (int i = 1; i <= n; i ++){
		printf("%d%c", i, " \n"[i == n]);
	}
}
