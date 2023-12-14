#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    arr.push_back(n);

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
            arr.push_back(n);
        } else {
            n = (3 * n) + 1;
            arr.push_back(n);
        }
    }

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i < arr.size() - 1) {
            cout << " ";
        }
    }

    return 0;
}
