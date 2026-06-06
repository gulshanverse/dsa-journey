#include <iostream>
using namespace std;

int main() {
    int n = 15;   // Change size here

    int N = 2 * n;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            bool outer = false;
            bool inner = false;

            // OUTER BUTTERFLY
            if (i < n) {
                outer = (j < n - i) || (j >= n + i);
            } else {
                outer = (j < i - n + 1) || (j >= N - (i - n + 1));
            }

            // INNER BUTTERFLY
            int k = n / 2;

            if (i >= k && i < N - k) {

                int r = (i < n) ? i - k : (N - 1 - k - i);

                if (r >= 0) {
                    inner =
                        (j >= k && j < k + (n - k - r)) ||
                        (j >= N - (n - k - r) - k && j < N - k);
                }
            }

            if (outer || inner)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}