// method1-------------
//CODE
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mp;
        int ele;
        for(int i =0;i<nums.size();i++)
        {
          ele = nums[i];
          mp[ele]++;
        }
        
        for(int i =0;i<nums.size();i++)
        {
            ele = nums[i];
            
          if(mp.find(ele) != mp.end())
          {
            if(mp[ele] == 1)
            {
                return ele;
            }
          }
        }
        return 0;

    }
};

// method2-------------
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //functions 
        // vectors -> array
        int  ans = 0;
        for(int i=0; i<nums.size(); i++){
            ans = ans ^ nums[i];
        }
        return ans;
    }
};

// method3-------------
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // frequency
        unordered_map<int, int>freqMap;

        // add frequency to the map/table (as key and value)
        for(int i = 0; i < nums.size(); i++){
            int num = nums[i]; // 1
            freqMap[num] = freqMap[num] + 1;
        }
        unordered_map<int, int>::iterator it;
        int ans;
        for(it = freqMap.begin(); it != freqMap.end(); it++){
            int key = it -> first;
            int freq = it -> second;
            // cout<<key<<" "<<freq<<endl;
            if (freq == 1){
                return key;
                
            }
        }
        return -1;
    }
};