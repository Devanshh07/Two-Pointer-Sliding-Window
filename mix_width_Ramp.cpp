#include <bits/stdc++.h>

using namespace std;

int ramp(vector<int> nums)
{
    int maxi = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] <= nums[j])
            {
                maxi = max(maxi, j - i);
            }
        }
    }
    return maxi;
}

// better approach;

class Solution
{
public:
    int maxWidthRamp(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> maxright(n);
        maxright[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; i--)
        {
            maxright[i] = max(maxright[i + 1], nums[i]);
        }
        int i = 0, j = 0;
        int ramp = 0;
        while (j < n)
        {

            while (i < j && nums[i] > maxright[j])
            {
                i++;
            }
            ramp = max(ramp, j - i);
            j++;
        }

        return ramp;
    }
};

int main()
{
    vector<int> nums = {9, 8, 1, 0, 1, 9, 4, 0, 4, 1};
    cout << ramp(nums);

    return 0;
}
