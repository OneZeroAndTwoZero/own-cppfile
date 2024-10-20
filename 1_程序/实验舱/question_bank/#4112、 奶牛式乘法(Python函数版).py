def custom_multiplication(A, B):
    S1 = str(A)
    S2 = str(B)
    res = 0
    for i in range(0, len(S1)):
        for j in range(0, len(S2)):
            res += int(S1[i]) * int(S2[j])
    return res