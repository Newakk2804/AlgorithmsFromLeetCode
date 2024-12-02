#include <iostream>
#include <string>

using namespace std;

string defangIPaddr(string address)
{
	string result = "";
	for (int i = 0; i < address.size(); i++)
	{
		if (address[i] == '.')
		{
			result = address.replace(i, 1, "[.]");
			i++;
		}
	}
	return result;
}


int main()
{
	string str = "1.1.1.1";
	string res = "";

	res = defangIPaddr(str);

	cout << res << endl;

	return 0;
}