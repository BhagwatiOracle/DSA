def moveZeroes(arr):

    n = len(arr)
    i = -1
    for j in range(n):
        if arr[j] == 0:
            i = j
            break
    if i == -1:
        return arr

    for j in range(i+1,n):
        if arr[j] != 0:
            arr[j], arr[i] = arr[i], arr[j]
            i+=1
         

    return arr

nums = [0, 1, 0, 3, 12]
result = moveZeroes(nums)
print(result)




   

    


    

    