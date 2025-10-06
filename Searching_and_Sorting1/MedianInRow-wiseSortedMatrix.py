import bisect

def findMedian(matrix):
    n = len(matrix)
    m = len(matrix[0])
    
    low, high = 1, 2000  # from constraints
    desired = (n * m) // 2

    while low < high:
        mid = (low + high) // 2
        count = 0

        for row in matrix:
            # count of elements <= mid in this row
            count += bisect.bisect_right(row, mid)

        if count <= desired:
            low = mid + 1
        else:
            high = mid

    return low
