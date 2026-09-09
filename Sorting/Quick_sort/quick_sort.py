def partition(arr, low, high):

    pivot = arr[low]
    i = low
    j = high

    while(i < j):

        while i <= high-1 and arr[i] <= pivot:
            i +=1
        while j >= low+1 and arr[j] > pivot:
            j -= 1

        if i < j:
            arr[i], arr[j] = arr[j], arr[i]
    arr[low], arr[j] = arr[j], arr[low]

    return j


def quick_sort(arr, low, high):

    if low < high:
        pivot_index = partition(arr, low, high)

        quick_sort(arr, low, pivot_index-1)
        quick_sort(arr, pivot_index+1, high)


# Driver code
arr = [10, 7, 8, 9, 1, 5]


# Call quicksort
quick_sort(arr, 0, len(arr) - 1)

# Print sorted array
print(*arr)

