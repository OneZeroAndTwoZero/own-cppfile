void printMinEvenNumber(int x){
	x += (2 - (x & 1));
	printf("%d\n", x);
}
