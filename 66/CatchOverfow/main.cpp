#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long parseLines(vector<string>& lines, long long index)
{
    if (index >= lines.size())
        return 0;
    string line = lines[index];
    if (line == "add") {
        long long result = parseLines(lines, index + 1) + 1;
        if (result >= pow(2, 32))
        {
            return -1;
        }
        return result;
    }
    else if (line.substr(0, 3) == "for")
    {
        long long count = stoi(line.substr(4, line.size() - 4));
        long long bal = 0;
        long long i = index + 1;
        while (lines[i] != "end" || bal != 0)
        {
            if (lines[i] == "end")
                bal--;
            else if (lines[i].substr(0, 3) == "for")
                bal++;
            i++;
        }
        long long r1 = parseLines(lines, index + 1);
        if (r1 == -1 || r1 >= pow(2, 32))
        {
            return -1;
        }
        long long r2 = parseLines(lines, i + 1);
        if (r2 == -1 || r2 >= pow(2, 32))
        {
            return -1;
        }
        return r1 * count + r2;
    }
    else if (line == "end")
        return 0;
}

int main() {
    long long l;
    cin >> l;

    vector<string> lines;
    string line;
    getline(cin, line);
    for (long long i = 0; i < l; i++)
    {
        getline(cin, line);
        lines.push_back(line);
    }

    long long r = parseLines(lines, 0);

    if (r == -1 || r >= pow(2, 32))
        cout << "OVERFLOW!!!";
    else
        cout << r;
}