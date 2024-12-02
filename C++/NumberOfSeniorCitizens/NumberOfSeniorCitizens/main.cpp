#include <iostream>
#include <vector>
#include <string>

using namespace std;

int countSeniors(vector<string>& details) {
    int count = 0;
    for (int i = 0; i < details.size(); i++)
    {
        std::string s;
        for (int j = 11; j < 13; j++)
        {
            s += (details[i][j]);
            if (std::stoi(s) > std::stoi("60"))
            {
                count++;
            }
        }
    }
    return count;
}

int main() {

    return 0;
}