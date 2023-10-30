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
    Node* cloneGraph(Node* node) {
        //psuedo:
        //start with root/first node
        //create a copy of first node
        //for each neighbor in adj list, add to toVisit
        //move to first neighbor, add to visited map, then add all neighbors to toVisit
        //make copy of current node
        //repeat
        if(node == nullptr){
            return node;
        }
        
        std::map<Node*,int> visited;
        std::vector<Node*> toVisit;
        Node* currentNode;
        std::map<int, Node*> newNodes;
        
        newNodes[node->val] = new Node(node->val);
        for(Node* n: node->neighbors){
            toVisit.push_back(n);
            newNodes[n->val] = new Node(n->val);
            newNodes[node->val]->neighbors.push_back(newNodes[n->val]);
        }
        visited[node] += 1;
        
        while(!toVisit.empty()){
            currentNode = toVisit.back();
            toVisit.pop_back();
            for(Node* n: currentNode->neighbors){
                if(visited[n] < 1){
                    toVisit.push_back(n);
                }
                if(newNodes[n->val] != nullptr){
                    
                    newNodes[currentNode->val]->neighbors.push_back(newNodes[n->val]);
                    set<Node*> s( newNodes[currentNode->val]->neighbors.begin(), newNodes[currentNode->val]->neighbors.end());
                    newNodes[currentNode->val]->neighbors.assign( s.begin(), s.end());

                }else{
                    newNodes[n->val] = new Node(n->val);
                    newNodes[currentNode->val]->neighbors.push_back(newNodes[n->val]);
                    set<Node*> s( newNodes[currentNode->val]->neighbors.begin(), newNodes[currentNode->val]->neighbors.end());
                    newNodes[currentNode->val]->neighbors.assign( s.begin(), s.end());
                }
            }
            visited[currentNode] += 1;
        }
        return newNodes[1];
    }
};