def rotateLeft(arr,d):
    n = len(arr)
    d = d%n

    # temp array
    temp = []
    for i in range(d):
        temp.append(arr[i])

    # shift
    for i in range(d,n):
        arr[i-d] = arr[i]

    # temp back to orignal
    for i in range(n-d,n):
        arr[i] = temp[i-(n-d)]


if __name__ == "__main__":
    arr = [1,2,3,4,5,6,7]
    d = 3
    rotateLeft(arr,d)
    for i in arr:
        print(i,end=' ')


    