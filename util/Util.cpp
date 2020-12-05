#include <iostream>
#include <vector>

using namespace std;

class Util {
public:
    static string toString(vector<int> nums) {
        string result;
        for (int i = 0; i < nums.size(); i++) {
            result.append(to_string(nums[i]));
            if (i != nums.size() - 1) {
                result.append(",");
            }
        }
        result.append("\n");

        return result;
    }

    static string toString(vector<string> nums) {
        string result;
        for (int i = 0; i < nums.size(); i++) {
            result.append(nums[i]);
            if (i != nums.size() - 1) {
                result.append(",");
            }
        }
        result.append("\n");

        return result;
    }

    static string toString(vector<vector<string>> nums) {
        string result;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums[i].size(); j++) {
                result.append(nums[i][j]);
                if (j != nums[i].size() - 1) {
                    result.append(",");
                }
            }
            result.append("\n");
        }
        result.append("\n");

        return result;
    }

};