#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    vector<long long> result;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        vector<int> a;
        cin >> n >> k;
        int prev = -1;
        long long min = 0;
        long long minStart = 0;
        long long sum = 0;
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
            if (j >= 1 && j <= k)
                sum += abs(temp - a[a.size() - 2]);
        }
        min = sum;
        for (int j = k + 1; j < n; j++)
        {
            sum -= abs(a[j-k] - a[j-k-1]) - abs(a[j] - a[j -1]);
            if (sum < min)
            {
                min = sum;
                minStart = j - k;
            }
        }
        result.push_back(llround((a[minStart + k] + a[minStart]) / (double)2));
    }
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
}