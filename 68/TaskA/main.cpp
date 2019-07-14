#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    vector<long long> result;
    for (int _ = 0; _ < t; _++)
    {
        long long n, x;
        cin >> n >> x;
        result.push_back(2 * x);
    }
    for (int i = 0; i < t; i++)
    {
        cout << result[i] << endl;
    }
}