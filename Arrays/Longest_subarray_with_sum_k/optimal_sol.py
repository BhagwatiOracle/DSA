def getLongestSubarray(arr,k):
    n = len(arr)
    left=0
    right=0
    sum = arr[0]
    maxLen = 0
    
    while right < n:
        while left <= right and sum > k:
            sum -= arr[left]
            left+=1

        if sum == k:
            maxLen = max(maxLen, right-left+1)

        right+=1
        if right < n:
            sum+= arr[right]

    return maxLen

nums = [10, 5, 2, 7, 1, 9]
k = 15


# Function call to find the length
# of longest subarray having sum k
ans = getLongestSubarray(nums, k)

print(f"The length of longest subarray having sum k is: {ans}")