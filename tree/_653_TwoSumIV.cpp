#include <iostream>
#include "../model/TreeNode.cpp"
#include <vector>

using namespace std;

class Solution {
public:
    bool findTarget(TreeNode *root, int k) {
        vector<int> list{};
        readInOrder(root, list);
        int left = 0, right = list.size() - 1, sum;
        bool result = false;

        while (left < right) {
            sum = list[left] + list[right];
            if (sum == k) {
                result = true;
                break;
            }

            if (sum < k) {
                left++;
            } else {
                right--;
            }
        }

        return result;
    }

    void readInOrder(TreeNode *node, vector<int> &list) {
        if (node == nullptr) {
            return;
        }

        readInOrder(node->left, list);
        list.push_back(node->val);
        readInOrder(node->right, list);
    }
};

int main() {

    if (true) {
        Solution *s = new Solution();
        TreeNode *root = new TreeNode();
        root->setTree(5, 3, 6, 2, 4, NULL, 7);
        int k = 9;

        cout << "Result " << s->findTarget(root, k) << endl;
    }

    if (true) {
        Solution *s = new Solution();
        TreeNode *root = new TreeNode();
        root->setTree(5, 3, 6, 2, 4, 7);
        int k = 28;

        cout << "Result " << s->findTarget(root, k) << endl;
    }

    return 0;
}