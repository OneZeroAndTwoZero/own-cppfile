def isPalindrome(s):
    # code
    ans = True
    l = 0
    r = len(s) - 1
    while l <= r:
        if s[l] != s[r]:
            ans = False
        l += 1
        r -= 1
    return ans