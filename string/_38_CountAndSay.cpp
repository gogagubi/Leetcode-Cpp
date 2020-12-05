#include <iostream>
#include <vector>
#include <string>
#include "../util/Util.cpp"

using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        string result;
        if (n < 1) return result;

        result.append("1");
        n--;

        int index, count;
        while (n-- > 0) {
            string tmp;
            index = 0;
            while (index < result.length()) {
                count = 1;
                while (index + 1 < result.length() && result[index] == result[index + 1]) {
                    index++;
                    count++;
                }

                tmp.append(to_string(count)).append(1, result[index++]);
            }
            result = tmp;
        }
        return result;
    }
};

int main() {

    if (true) {
        Solution *s = new Solution();
        int n = 5;
        cout << "Result " << s->countAndSay(n) << endl;
    }


    return 0;
}