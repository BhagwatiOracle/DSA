def missingNum(arr):
    n = len(arr)+1  #(1 missing no)
    hash = [0]*(n+1)
    for num in arr:
        hash[num] += 1

    for i in range(1, n + 1):
        if hash[i] == 0:
            return i

    
    return -1

if __name__ == '__main__':
    arr = [8, 2, 4, 5, 3, 7, 1]
    res = missingNum(arr)
    print(res)