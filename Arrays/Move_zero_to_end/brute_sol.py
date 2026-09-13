def moveZeroes(arr):

    n = len(arr)
    temp = []
    for i in range(n):
        if arr[i] != 0:
            temp.append(arr[i])

    nz = len(temp)
    for i in range(nz):
        arr[i] = temp[i]

    for i in range(nz,n):
        arr[i] = 0

    return arr


if __name__ == "__main__":
    arr = [1,2,0,0,4,0,6]
    print(moveZeroes(arr))
