def longestSubarray(num,k):
    n = len(num)
    maxLength = 0
    for i in range(n):
        sum = 0
        for j in range(i,n):
            sum += num[j]

            if sum == k:
                maxLength = max(maxLength,j-i+1)

    return maxLength


if __name__ == "__main__":
    nums = [-1, 1, 1]
    k = 1
    length = longestSubarray(nums,k)
    print("The length of the longest subarray is:", length)