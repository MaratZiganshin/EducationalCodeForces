#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;
    vector<int> result;
    for (int i = 0; i < T; i++)
    {
        int n, s, t;
        cin >> n >> s >> t;
        result.push_back(max(s, t) - (min(s, t) - (n - max(s, t))) + 1);
    }
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
}