def search(arr,num):
    for i in range(len(arr)):
        if arr[i] == num:
            return i

    return -1


if __name__ == "__main__":
    arr = [1,2,3,4,5,6]
    num = 3
    print(search(arr,num))

