#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int t;
    cin >> t;
    vector<bool> result;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a;
        queue<int> b;
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            b.push(temp);
        }

        int count = 0;
        for (int j = 0; j < n; j++)
        {
            int k = b.front();
            b.pop();
            bool found = false;
            for (int l = 0; l <= a.size(); l++)
            {
                if (a[l] == k)
                {
                    a.erase(a.begin() + l);
                    found = true;
                    break;
                }
                if (a[l] < k)
                {
                    break;
                }
            }
            if (!found)
                break;
            count++;
        }


        if (count == n)
        {
            result.push_back(true);
        }
        else result.push_back(false);
    }
    for (int i = 0; i < result.size(); i++)
    {
        cout << (result[i] ? "YES" : "NO") << endl;
    }
}