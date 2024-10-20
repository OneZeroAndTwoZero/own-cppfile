def getFibonacci(n):
    # code
    if n == 1 or n == 2:
        return 1
    return getFibonacci(n - 1) + getFibonacci(n - 2)