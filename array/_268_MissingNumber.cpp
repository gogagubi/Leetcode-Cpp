#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int> &nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }

        int n = nums.size() + 1;
        return (n * (n - 1) / 2) - sum; // this is formula
    }
};

class Solution1 {
public:
    int missingNumber(vector<int> &nums) {
        set<int> s;

        for (int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }

        for (int i = 0; i <= nums.size(); i++) {
            if (!s.count(i)) { //same as contains
                return i;
            }
        }

        return -1;
    }
};

int main() {

    //expect 2
    if (false) {
        Solution *s = new Solution();
        Solution1 *s1 = new Solution1();
        vector<int> nums{3, 0, 1};
        cout << "Result " << s->missingNumber(nums) << endl;
        cout << "Result " << s1->missingNumber(nums) << endl;
    }

    //expect 8
    if (false) {
        Solution *s = new Solution();
        Solution1 *s1 = new Solution1();
        vector<int> nums{9, 6, 4, 2, 3, 5, 7, 0, 1};
        cout << "Result " << s->missingNumber(nums) << endl;
        cout << "Result " << s1->missingNumber(nums) << endl;
    }

    //expect 1
    if (true) {
        Solution *s = new Solution();
        Solution1 *s1 = new Solution1();
        vector<int> nums{0};
        cout << "Result " << s->missingNumber(nums) << endl;
        cout << "Result " << s1->missingNumber(nums) << endl;
    }

    //expect 0
    if (false) {
        Solution *s = new Solution();
        Solution1 *s1 = new Solution1();
        vector<int> nums{1};
        cout << "Result " << s->missingNumber(nums) << endl;
        cout << "Result " << s1->missingNumber(nums) << endl;
    }

    return 0;
}