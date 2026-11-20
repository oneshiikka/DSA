class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
 
        if (n == 0) {
            return 0;
        }
 
        int uniquePosition = 1;
 
        for (int current = 1; current < n; current++) {
            
            if (nums[current] != nums[uniquePosition-1]) {
                nums[uniquePosition] = nums[current];
                uniquePosition++;
            }
        }
 
        return uniquePosition;
        
    }
};