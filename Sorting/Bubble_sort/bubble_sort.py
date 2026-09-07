def bubble_sort(arr):

    for i in range(len(arr)-1,-1,-1):
        did_swap = False
        for j in range(i):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                did_swap = True
        if not did_swap:
            break

    print(arr)

arr = [13, 46, 24, 52, 20, 9]
# Call bubble sort
bubble_sort(arr)


