#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

long long x;
stack<long long> fors;

bool parseLine(string& line)
{
    if (line == "add") {
        x += fors.top();
        if (x >= pow(2, 32))
        {
            return false;
        }
        return true;
    }
    else if (line.substr(0, 3) == "for")
    {
        long long count = stoi(line.substr(4, line.size() - 4));
        fors.push(min(fors.top() * count, (long long)pow(2, 32)));
        return true;
    }
    else if (line == "end")
    {
        fors.pop();
        return true;
    }
}

int main() {
    x = 0;
    long long l;
    cin >> l;
    fors.push(1);

    string line;
    getline(cin, line);
    bool succ = true;
    for (long long i = 0; i < l; i++)
    {
        getline(cin, line);
        bool r = parseLine(line);
        if (!r)
        {
            succ = false;
        }

    }

    if (!succ)
        cout << "OVERFLOW!!!";
    else
        cout << x;
}