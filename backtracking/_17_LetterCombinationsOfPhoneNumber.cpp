#include <iostream>
#include <vector>
#include <string>
#include "../util/Util.cpp"
#include <deque>

using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.length() == 0) {
            return result;
        }

        vector<string> map{"1", "2", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        deque<char> current;
        backtrack(0, digits, map, current, result);
        return result;
    }

    void backtrack(int position, string &digits, vector<string> &map, deque<char> &current, vector<string> &result) {
        if (current.size() == digits.length()) {
            string currentStr;
            deque<char> currentCopy = current;
            while (!currentCopy.empty()) {
                currentStr.append(1, currentCopy.front());
                currentCopy.pop_front();
            }

            result.push_back(currentStr);
            return;
        }

        string letters = map[digits[position] - '0'];
        for (int i = 0; i < letters.length(); i++) {
            current.push_back(letters[i]);
            backtrack(position + 1, digits, map, current, result);
            current.pop_back();
        }
    }
};

int main() {

    if (true) {
        Solution *s = new Solution();
        string digits = "23";
        cout << "Result " << Util::toString(s->letterCombinations(digits)) << endl;
    }

    if (true) {
        Solution *s = new Solution();
        string digits = "";
        cout << "Result " << Util::toString(s->letterCombinations(digits)) << endl;
    }

    return 0;
}