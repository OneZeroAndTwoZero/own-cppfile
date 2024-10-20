long long gcd(long long a, long long b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b){
    long long cur = gcd(a, b);
    return a / cur * b;
}
