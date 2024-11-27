#include <iostream>
#include <vector>

using namespace std;

vector<int> findWordsContaining(vector<string>& words, char& x) {
    vector<int> indexes;
    for (size_t i = 0; i < words.size(); i++)
    {
        for (size_t j = 0; j < words[i].size(); j++)
        {
            if (words[i][j] == x)
            {
                indexes.push_back(i);
                break;
            }
        }
    }
    return indexes;
}

int main() {

    return 0;
}