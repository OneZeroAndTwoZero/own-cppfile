void print1To100(){
	for (int i = 1; i <= 100; i ++){
		printf("%d%c", i, " \n"[i == 100]);
	}
}
