def get_longest_subarray(a,k):
    n = len(a)
    pre_sum_map  = {}
    sum_so_far = 0
    max_len = 0

    for i in range(n):
        sum_so_far += a[i]

        if sum_so_far == k:
            max_len = max(max_len,i+1)
        
        rem = sum_so_far - k
        if rem in pre_sum_map:
            length = i - pre_sum_map[rem]
            max_len = max(max_len,length)

        if sum_so_far not in pre_sum_map:
            pre_sum_map[sum_so_far] = i

    return max_len

a = [-1, 1, 1]
k = 1
length = get_longest_subarray(a, k)
print("The length of the longest subarray is:", length)