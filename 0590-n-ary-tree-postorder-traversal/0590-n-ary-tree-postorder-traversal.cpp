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
    vector<int> postorder(Node* root) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
     if(root==NULL)
       return v;
     for (Node* x : root->children) 
        postorder(x);
     v.push_back(root->val);

       return v;

    }
};