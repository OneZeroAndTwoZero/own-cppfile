void printChar(int n, int m){
	for (int i = 1; i <= n; i ++){
		for (int j = 0; j < m; j ++){
			printf("%c", ((i & 1) ? '*' : '#'));
		}
		printf("\n");
	}
}
