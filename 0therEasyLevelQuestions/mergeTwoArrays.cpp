// https://leetcode.com/problems/merge-sorted-array/description/

// method1:
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        for (int j = 0, i = m; j < n; j++)
        {
            nums1[i] = nums2[j];
            i++;
        }
        sort(nums1.begin(), nums1.end());
    }
};

// method 2:
class Solution{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n){
        int k = m + n - 1;
        int i = m - 1;
        int j = n - 1;
        while (i >= 0 && j >= 0){
            if (nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i--;
                k--;
            }

            // This only handles the case when nums2[j] >nums1[i],
            // but what if nums2[j] == nums1[i]? In that case
            //  f nums1[i] == nums2[j], then the if condition is false, so the code enters the else block.

            // So it does not skip anything — it copies nums2[j] into nums1[k].
            //	So in the case of nums1[i] == nums2[j], your code works perfectly — it
            // just chooses to copy the element from nums2.

            else{
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }
        while (j >= 0){
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};
