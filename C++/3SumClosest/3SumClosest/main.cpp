#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int threeSumClosest(vector<int>& nums, int target)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int left = 0;
    int sum = nums[0] + nums[1] + nums[2];
    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        left = i + 1;
        int right = n - 1;
        while (left < right)
        {
            sum1 = nums[left] + nums[right] + nums[i];
            if (abs(sum1 - target) <= abs(sum - target))
                sum = sum1;
            if (sum1 > target)
                right--;
            else if (sum1 < target)
                left++;
            else return sum1;

        }
    }
    return sum;
}

int main() {

    return 0;
}