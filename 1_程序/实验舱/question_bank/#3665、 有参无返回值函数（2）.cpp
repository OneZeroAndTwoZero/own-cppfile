void printMaxOddNumber(int x){
	x -= (1 + (x & 1));
	printf("%d\n", x);
}
