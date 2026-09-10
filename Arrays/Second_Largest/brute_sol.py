
def second_Largest(arr):

    if len(arr)< 2:
        return None

    arr.sort()

    largest = arr[-1]
    second_largest = arr[-2]

    print("Largest element is:", largest)
    print("Second largest element is:", second_largest)

if __name__ == "__main__":
    arr = [10, 5, 8, 12, 15, 7]
    second_Largest(arr)