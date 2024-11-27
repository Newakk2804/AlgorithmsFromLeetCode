#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int>& nums, int target)
{
    bool flag = false;
    int left = 0;
    int right = nums.size() - 1;
    int mid;

    while ((left <= right) && (flag != true))
    {
        mid = (left + right) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }

        if (nums[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return left;
}

int main() {

    return 0;
}