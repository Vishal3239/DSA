#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> resultArray(vector<int> &nums)
    {
        vector<int> arr1;
        vector<int> arr2;
        arr1.push_back(nums[1]);
        arr2.push_back(nums[2]);

        for (int i = 3; i <= nums.size(); ++i)
        {
            if (arr1.back() > arr2.back())
            {
                arr1.push_back(nums[i]);
            }
            else
            {
                arr2.push_back(nums[i]);
            }
        }
        vector<int> result = arr1;
        result.insert(result.end(), arr2.begin(), arr2.end());
        return result;
    }
};
int main()
{

    return 0;
}