def find_missing_number(nums):
    hash = {}
    for i in nums:
        hash[i] = 1
    for i in range(0, len(nums) + 1):
        if i in hash:
            continue
        return i
    return -1