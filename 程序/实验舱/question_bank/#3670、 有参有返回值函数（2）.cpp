bool isSquare(long long x){
	// code
	if (x < 0) return 0;
	long long cur = sqrt(x);
	return cur * cur == x;
}
