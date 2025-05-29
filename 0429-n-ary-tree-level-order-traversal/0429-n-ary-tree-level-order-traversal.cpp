/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if (!root) return {};

        vector<vector<int>> ans;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {

            int n = q.size();
            vector<int> temp;

            for (int i = 0; i<n; i++) {
                auto front = q.front();
                q.pop();

                temp.push_back(front->val);

                for (auto child : front->children) {
                    q.push(child);
                }
            }

            ans.push_back(temp);
        }

        return ans;
    }
};