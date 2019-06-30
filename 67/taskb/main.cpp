#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<char, vector<int>> indexesForLetters;
    for (int j = 0; j < s.length(); j++)
    {
        indexesForLetters[s[j]].push_back(j);
    }

    int m;
    cin >> m;
    vector<int> result;
    for (int i = 0; i < m; i++)
    {
        string name;
        map<char, int> nameLetters;
        cin >> name;
        for (int j = 0; j < name.length(); j++)
        {
            if (nameLetters.count(name[j]) == 0)
                nameLetters[name[j]] = 1;
            else nameLetters[name[j]] ++;
        }
        int maxim = 0;
        for (auto& pair : nameLetters)
        {
            char letter = pair.first;
            int count = pair.second;
            if (indexesForLetters[letter][count - 1] > maxim)
            {
                maxim = indexesForLetters[letter][count - 1];
            }
        }
        result.push_back(maxim);
    }
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] + 1 << endl;
    }
}