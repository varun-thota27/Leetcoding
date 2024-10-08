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
    vector<int> v;
public:
    vector<int> preorder(Node* root) {

       if(root==NULL)
       return v;
       v.push_back(root->val);
      for (Node* x : root->children) {
            preorder(x);
        }

       return v;
    }
};