/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* clone(Node* node, map<Node*, Node*>& mp) {
        Node* temp = new Node(node->val);
        mp[node] = temp;

        for (auto neighbor : node->neighbors) {
            if (mp.find(neighbor) == mp.end()) {
                temp->neighbors.push_back(clone(neighbor, mp));
            } else {
                temp->neighbors.push_back(mp[neighbor]);
            }
        }
        return temp;
    }

    Node* cloneGraph(Node* node) {
        if (!node) {
            return NULL;
        }
        map<Node*, Node*> mp;
        return clone(node, mp);
    }
};