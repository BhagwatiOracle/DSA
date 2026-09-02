def selection_sort(arr):

    for i in range(len(arr)-1):
        mini_index = i
        for j in range(i, len(arr)):
            if arr[j] < arr[mini_index]:
                mini_index = j

        arr[i], arr[mini_index] = arr[mini_index], arr[i]

    print(arr)

arr = [13, 46, 24, 52, 20, 9]

# Call selection sort
selection_sort(arr)


