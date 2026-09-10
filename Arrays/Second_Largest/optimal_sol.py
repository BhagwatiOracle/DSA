def second_Largest(arr):
    if len(arr) < 2:
        return None
    largest = float('-inf')
    slargest = float('-inf')
    for i in range(len(arr)):
        if arr[i] > largest:
            slargest = largest
            largest = arr[i]
        elif arr[i] > slargest and arr[i] != largest:
            slargest = arr[i]

    return slargest

def second_Smallest(arr):
    if len(arr) < 2:
        return None
    smallest = float('inf')
    ssmallest = float('inf')
    for i in range(len(arr)):
        if arr[i] < smallest:
            ssmallest = smallest
            smallest = arr[i]
        elif arr[i] < ssmallest and arr[i] != smallest:
            ssmallest = arr[i]
    return ssmallest

def getSecondOrderElement(arr):
    second_smallest = second_Smallest(arr)
    second_largest = second_Largest(arr)

    print("Second Smallest element: ", second_smallest)
    print("Second Largest element: ", second_largest)



if __name__ == "__main__":
    arr = [2,4,6,8,9]

    getSecondOrderElement(arr)


            