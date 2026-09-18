def getSingleElement(arr):
    n = len(arr)

    maxi = max(arr)

    hash_arr = [0] * (maxi+1)

    for num in arr:
        hash_arr[num] += 1

    for num in arr:
        if hash_arr[num] == 1:
            return num

    return -1

arr = [4, 1, 2, 1, 2]
ans = getSingleElement(arr)
print("The single element is:", ans)