#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxArea(vector<int> &height) {
        int left = 0, right = height.size() - 1, minimum, current, result = 0;

        while (left < right) {
            minimum = min(height[left], height[right]);
            current = minimum * (right - left);
            result = max(result, current);

            if (height[left] < height[right]) {
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
        vector<int> height{1, 8, 6, 2, 5, 4, 8, 3, 7};
        cout << "Result " << s->maxArea(height);
    }

    return 0;
}