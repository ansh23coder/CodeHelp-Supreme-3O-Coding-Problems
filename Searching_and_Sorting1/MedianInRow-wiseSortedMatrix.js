// https://www.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1

function findMedian(matrix) {
    const n = matrix.length;
    const m = matrix[0].length;

    let low = 1, high = 2000;

    const countLessEqual = (row, target) => {
        let l = 0, r = row.length;
        while (l < r) {
            let mid = Math.floor((l + r) / 2);
            if (row[mid] <= target) l = mid + 1;
            else r = mid;
        }
        return l;
    };

    while (low < high) {
        let mid = Math.floor((low + high) / 2);
        let count = 0;
        for (let row of matrix) {
            count += countLessEqual(row, mid);
        }

        if (count <= Math.floor((n * m) / 2)) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    return low;
}
