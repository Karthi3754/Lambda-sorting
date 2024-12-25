#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    // Sort the vector in ascending order using a lambda function
    sort(vec.begin(), vec.end(), [](int a, int b) {
        return a < b;  // Sort in ascending order using quick sort
    });

    for (int num : vec) {
        cout << num << " ";
    }

    return 0;
}
