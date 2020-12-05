#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findPeakElement(vector<int> &nums) {
        int maxPeak = 0, maximum = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i] > maximum) {
                maximum = nums[i];
                maxPeak = i;
            }
        }
        return maxPeak;
    }
};

int main() {

    if (true) {
        Solution *s = new Solution();
        vector<int> height{1, 2, 3, 1};
        cout << "Result " << s->findPeakElement(height) << endl;
    }

    if (true) {
        Solution *s = new Solution();
        vector<int> height{1, 2, 1, 3, 5, 6, 4};
        cout << "Result " << s->findPeakElement(height) << endl;
    }

    if (true) {
        Solution *s = new Solution();
        vector<int> height{1, 2};
        cout << "Result " << s->findPeakElement(height) << endl;
    }

    if (true) {
        Solution *s = new Solution();
        vector<int> height{-2147483648, -2147483647};
        cout << "Result " << s->findPeakElement(height) << endl;
    }


    return 0;
}