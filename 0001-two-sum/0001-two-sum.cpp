#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        unordered_map<int, int> numToIndex;
        
     
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int complement = target - num;
            
        
            if (numToIndex.find(complement) != numToIndex.end()) {
                
                return { numToIndex[complement], i };
            }
            
          
            numToIndex[num] = i;
        }
        
        
        return {};
    }
};
