def moveZeroes(nums):
    n = len(nums)
    i = -1
    for j in range(n):
        if nums[j] ==0:
            i = j
            break

    if i == -1: 
        return nums

    for j in range(i+1,n):
        if nums[j] != 0:
            nums[i], nums[j] = nums[j], nums[i]
            i+= 1

    return nums

if __name__ == "__main__":
    nums = [0,0,0,1,3,4,0,6,7]
    print(moveZeroes(nums))