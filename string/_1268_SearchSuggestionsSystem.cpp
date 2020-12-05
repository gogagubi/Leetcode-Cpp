#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include "../util/Util.cpp"

using namespace std;

class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string> &products, string searchWord) {
        vector<vector<string>> res;
        sort(products.begin(), products.end());

        for (int i = 0; i < searchWord.length(); i++) {
            vector<string> currentList;

            for (int j = 0; j < products.size(); j++) {
                int matches = 0;
                int start = 0;
                while (start <= i && start < products[j].length()) {
                    if (searchWord[start] == products[j][start]) {
                        matches++;
                    }
                    start++;
                }

                if (matches == i + 1) {
                    currentList.push_back(products[j]);
                }

                if (currentList.size() >= 3) break;
            }
            res.push_back(currentList);
        }

        return res;
    }
};

int main() {

    if (true) {
        Solution *s = new Solution();
        vector<string> products{"mobile", "mouse", "moneypot", "monitor", "mousepad"};
        string searchWord = "mouse";

        cout << Util::toString(s->suggestedProducts(products, searchWord)) << endl;
    }


    return 0;
}