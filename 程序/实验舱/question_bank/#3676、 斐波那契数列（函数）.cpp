long long rem[1003];

long long getNthFibonacciNumber(int N){
    if (N <= 2) return 1LL;
    if (!rem[N]) rem[N] = getNthFibonacciNumber(N - 1) + getNthFibonacciNumber(N - 2);
    return rem[N];
}
