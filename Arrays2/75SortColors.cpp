// https://leetcode.com/problems/sort-colors/


/*
class Solution {
public:
    // 1st method(100%)-
    // void sortColors(vector<int>& nums) {
    //     sort(nums.begin(), nums.end());
    // }

    // 2nd method (100%)-
    void sortColors(vector<int>& nums){
        int freq[3] = {0};
        for(int x: nums)
            freq[x]++;
        
        int n = nums.size(), count = 0;
        for(int x = 0; x < 3; x++){
            fill(nums.begin() + count, nums.begin() + count + freq[x], x);
            count += freq[x];
        }
    }

    // 3rd method_count method(2%)-
    // void sortColors(vector<int> &nums){

    //     int zeroes, ones, twos;
    //     zeroes = ones = twos = 0;
    //     int n = nums.size();
    //     for (int i = 0; i < nums.size(); i++){
    //         if (nums[i] == 0){
    //             zeroes++;
    //         }
    //         else if (nums[i] == 1){
    //             ones++;
    //         }
    //         else{
    //             twos++;
    //         }
    //     }

    //     int j = 0;
    //     while (zeroes--){
    //         nums[j] = 0;
    //         j++;
    //     }
    //     while (ones--){
    //         nums[j] = 1;
    //         j++;
    //     }
    //     while (twos--){
    //         nums[j] = 2;
    //         j++;
    //     }
    // }

    // 4th method(100%)-
    // void sortColors(vector<int>& nums){
    //     int l=0; 
    //     int h=nums.size()-1;
    //     int m=0;

    //     while(m <= h){
    //         if(nums[m] == 0){
    //             swap(nums[l], nums[m]);
    //             l++, m++;
    //         }
    //         else if(nums[m] == 1){
    //             m++;
    //         }
    //         else if(nums[m] == 2){
    //             swap(nums[m], nums[h]);
    //             h--;
    //         }
    //     }
    // }
};

*/