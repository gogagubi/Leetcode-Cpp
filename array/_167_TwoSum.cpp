#include <iostream>
#include <vector>
#include "../util/Util.cpp"

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> result{};
        int left = 0, right = numbers.size() - 1, sum;
        while (left < right) {
            sum = numbers[left] + numbers[right];
            if (sum == target) {
                result.push_back(left + 1);
                result.push_back(right + 1);
                break;
            }

            if (sum < target) {
                left++;
            } else {
                right--;
            }
        }

        return result;
    }
};

int main() {

    if (true) {
        Solution *s = new Solution();
        vector<int> numbers{2, 7, 11, 15};
        int target = 9;
        cout << "Result " << Util::toString(s->twoSum(numbers, target)) << endl;
    }

    return 0;
}