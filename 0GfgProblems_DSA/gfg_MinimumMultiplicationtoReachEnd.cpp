// https://www.geeksforgeeks.org/problems/minimum-multiplications-to-reach-end/1

// cpp --------
/*
class Solution {
    public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        if (start == end) return 0;
        
        queue<pair<int, int>> q;
        vector<bool> visited(100000, false);

        q.push({start, 0});
        visited[start] = true;

        while (!q.empty()) {
            int current = q.front().first;
            int steps = q.front().second;
            q.pop();

            for (int multiplier : arr) {
                int next = (current * multiplier) % 100000;

                if (next == end)
                    return steps + 1;

                if (!visited[next]) {
                    visited[next] = true;
                    q.push({next, steps + 1});
                }
            }
        }
        return -1;
    }
};
*/