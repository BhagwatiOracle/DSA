def bubble_sort(arr,n):

    if n == 1:
        return
    didSwap = False

    for i in range(n-1):
        if arr[i] > arr[i+1]:
            arr[i], arr[i+1] = arr[i+1], arr[i]
            didSwap = True

    if not didSwap:
        return

    bubble_sort(arr, n-1)


arr = [13, 46, 24, 52, 20, 9]
print("Before Using Bubble Sort:")
print(arr)

bubble_sort(arr, len(arr))

print("After Using Bubble Sort:")
print(arr)
    