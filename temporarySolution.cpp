#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> twoSum{};
        int i = 0;
        for (int i = nums.size(); i > 0; i--)
        {
            for (int j = 0; j < i; i++)
            {
                int sum = (nums[i] + nums[j]);
                if (sum == target)
                {
                    twoSum.push_back(i);
                    twoSum.push_back(j);
                }
            }
            i++;
        }
        return twoSum;
    }
};


int main(){
    vector<int> nums { 2, 7, 11, 15 };
    int target = 9;


    Solution FindSum;

    FindSum.twoSum(nums, target);
}