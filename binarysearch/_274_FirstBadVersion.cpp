#include <iostream>

using namespace std;

bool isBadVersion(int num) {
    if (num >= 4) {
        return true;
    }

    return false;
}

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;

        while(left < right) {
            int middle = left + (right - left) / 2;

            if (!isBadVersion(middle)) {
                left = middle + 1;
            } else {
                right = middle;
            }
        }

        return left;
    }
};

int main() {
    if (true) {
        Solution *s = new Solution();
        int n = 5;
        cout << "Result " << s->firstBadVersion(n) << endl;
    }


    return 0;
}

