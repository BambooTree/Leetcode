#include<iostream>
#include <vector>
using namespace std;

class Solution
 {
public:
    int removeElement(vector<int>& nums, int val)
     {
        int idx = 0;
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] != val)
                nums[idx++] = nums[i];
        return idx;
    }
};

int main() {
  
  /* Given nums = [3,2,2,3], val = 3,

Your function should return length = 2, with the first two elements of nums being 2.
*/
        vector<int> nums { 3,2,2,3};
        int val = 3;

        
        int ret = Solution().removeElement(nums, val);
         cout<< "ret " <<ret<<endl;
    
       
    
    return 0;
}