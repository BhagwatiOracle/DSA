def getSingleElement(arr):

    n = len(arr)

    for i in range(n):
        cnt = 0
        num = arr[i]
        for j in range(n):
            if num == arr[j]:
                cnt += 1
        if cnt == 1:
            return num
    return -1

if __name__ == "__main__":
    arr = [4,1,2,1,2]
    ans = getSingleElement(arr)
    print("The single element is:", ans)