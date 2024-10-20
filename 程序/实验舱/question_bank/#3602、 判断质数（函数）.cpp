bool isPrime(long long x){
    bool flag = (x >= 2);
    if (!flag) return flag;
    for (long long i = 2; i <= x / i; i ++){
		if (x % i) continue;
		return 0;
	}
    return flag;
}
