def removeDuplicates(nums):

    st = set()
    for i in range(len(nums)):
        st.add(nums[i])

    index = 0
    for j in st:
        nums[index] = j
        index+=1

    return index

# Driver code
nums = [0,0,1,1,1,2,2,3,3,4]
k = removeDuplicates(nums)

print("k =", k)
print("Array after removing duplicates:", nums[:k])