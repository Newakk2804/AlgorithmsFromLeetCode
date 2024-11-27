#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> res;
	bool flag = false;
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = 0; j < nums.size(); j++)
		{
			if (i == j)
				break;
			if (nums[i] + nums[j] == target)
			{
				res.push_back(i);
				res.push_back(j);
				flag = true;
				break;
			}
		}
		if (flag)
			break;
	}
	return res;
}

int main() {
	vector<int> nums{ 2, 7, 11, 15 };
	int target = 9;
	vector<int> res = twoSum(nums, target);
	
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << " ";
	}
	cout << endl;
}