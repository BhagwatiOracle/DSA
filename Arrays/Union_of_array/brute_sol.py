def findUnion(arr1,arr2):
    st = set()
    for i in range(len(arr1)):
        st.add(arr1[i])

    for i in range(len(arr2)):
        st.add(arr2[i])

    union = []
    for el in st:
        union.append(el)

    return union


if __name__ == "__main__":
    arr1 = [1,1,2,3,4,5]
    arr2 = [2,3,4,4,5,6]
    print(findUnion(arr1,arr2))
