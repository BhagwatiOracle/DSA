def insertion_sort(arr, n, i):

    if i == n:
        return

    j = i
    while j > 0 and arr[j-1] > arr[j]:
        arr[j], arr[j-1] = arr[j-1], arr[j]
        j -= 1
    insertion_sort(arr, n, i + 1)


# Driver code
arr = [13, 46, 24, 52, 20, 9]
n = len(arr)

print("Before Using Insertion Sort:")
print(arr)

insertion_sort(arr,  n, 0)

print("After Using Insertion Sort:")
print(arr)