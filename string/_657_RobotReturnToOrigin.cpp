#include <iostream>
#include <vector>
#include <string>
#include "../util/Util.cpp"

using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        int L = 0, R = 0, U = 0, D = 0;

        for (int i = 0; i < moves.length(); i++) {
            switch (moves[i]) {
                case 'L':
                    L++;
                    break;
                case 'R':
                    R++;
                    break;
                case 'U':
                    U++;
                    break;
                case 'D':
                    D++;
                    break;
            }
        }

        return L == R && U == D;
    }
};

int main() {

    if (true) {
        Solution *s = new Solution();
        string moves = "UD";
        cout << "Result " << s->judgeCircle(moves) << endl;
    }

    if (true) {
        Solution *s = new Solution();
        string moves = "LL";
        cout << "Result " << s->judgeCircle(moves) << endl;
    }

    return 0;
}