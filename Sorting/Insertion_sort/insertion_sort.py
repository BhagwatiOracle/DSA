def insertionSort(arr):
    for i in range(len(arr)):
        j = i
        while j>0 and arr[j] < arr[j-1]:
            arr[j], arr[j-1] = arr[j-1], arr[j]
            j -= 1
    print(arr)


arr = [13, 46, 24, 52, 20, 9]
# Call insertion sort
insertionSort(arr)



