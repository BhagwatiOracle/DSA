def findLargestElement(arr, n):
    max = arr[0]
    for i in range(1,n):
        if arr[i] > max:
            max = arr[i]

    return max


if __name__ == "__main__":

    arr1 = [2, 5, 1, 3, 0]
    n = len(arr1)  # Size of the array
    max = findLargestElement(arr1, n)  # Call the function to find the largest element
    print("The largest element in the array is:", max)  # Output the result

    