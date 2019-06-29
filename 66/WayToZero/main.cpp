#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long t;

    cin >> t;
    vector<long long> result;
    for (long long i = 0; i < t; i++)
    {
        long long n, k;
        cin >> n >> k;
        long long count = 0;
        while (n != 0)
        {
            if (n % k == 0)
            {
                n /= k;
                count ++;
            }
            else
            {
                count += n % k;
                n -= n % k;
            }

        }
        result.push_back(count);
    }

    for (long long i = 0; i < result.size() - 1; i++)
        cout << result[i] << endl;
    cout << result[result.size() - 1];
}