#include <iostream>
#include <vector>

using namespace std;

bool canArrange(vector<int>& arr, int k) 
{
	vector<int> freq(k, 0);
	for (int x : arr)
	{
		x %= k;
		if (x < 0) x += k;
		freq[x]++;
	}

	if (k % 2 == 0 && freq[k / 2] % 2 != 0) return 0;
	int k2 = k / 2 - (k % 2 == 0);
	for (int i = 1; i <= k2; i++)
	{
		if (freq[i] != freq[k - i]) return 0;
	}
	return 1;
}

int main()
{
	vector<int> array = {1, 2, 3, 4, 5, 10, 6, 7, 8, 9};
	int curr = 5;
	bool res;

	res = canArrange(array, curr);

	return 0;
}