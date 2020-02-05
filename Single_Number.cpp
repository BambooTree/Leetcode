#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
   
        int singleNumber(vector<int>& nums)
    {
        unordered_map<int, int> mp; 
        for (int i = 0; i < nums.size(); ++i) 
            mp[nums[i]]++; 
        unordered_map<int, int>::iterator itr;
        for ( itr =mp.begin() ;itr!=mp.end();++itr )        
        {
            if(itr->second==1)
                return itr->first;
        }
        return -1;
    }

};
int main() {
  /*
Input: [2,2,1]
Output: 1

Input: [4,1,2,1,2]
Output: 4
*/
        vector<int>nums{1,1,2,4,2};
        
        int ret = Solution().singleNumber(nums);

       cout << "ret "<<ret<<endl;
    
    return 0;
}
