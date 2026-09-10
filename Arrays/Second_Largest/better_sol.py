def second_Largest(arr):

    largest = float('-inf')
    second_largest = float('-inf')

    for i in range(len(arr)):
        if arr[i] > largest:
            largest = arr[i]

    for i in range(len(arr)):
        if arr[i] > second_largest and arr[i] != largest:
            second_largest = arr[i]

    print("Largest element is:", largest)
    print("Second largest element is:", second_largest)

if __name__ == "__main__":
    arr = [10, 5, 8, 12, 15, 7]
    second_Largest(arr)