#include <iostream>
#include <vector>
#include <map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::map<int, int> result;
        for(int i = 0; i< nums.size(); ++i){
            int current = target - nums[i];
            if(result.count(current)){
                return {result[current], i};
            }
            result[nums[i]] = i;
        }
        return {};
    }
};