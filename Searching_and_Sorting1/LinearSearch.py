def linearSearch(arr, targetVal):
    for i in range(len(arr)):
        if arr[i] == targetVal:
            return i
    return -1

arr = [1, 23, 434, 232, 32, 25, 32, 83, 101]
targetVal = 101

result = linearSearch(arr, targetVal)

if result != -1:
    print("Value: ", targetVal, ", found at index", result)
else:
    print("Value: ", targetVal, ", not found")

# output:
# Value:  101 , found at index 8