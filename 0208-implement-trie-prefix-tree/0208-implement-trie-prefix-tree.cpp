class Trie {
public:
    Trie() {
    }
    
    void insert(string word) {
        words.push_back(word);
    }
    
    bool search(string word) {
        return find(words.begin(), words.end(), word) != words.end();
    }
    
    bool startsWith(string prefix) {
        for(string word : words){
            //std::cout << word.substr(0,prefix.length()) << std::endl;
            if(word.substr(0,prefix.length()) == prefix ){
                return true;
            }
        }
        return false;  
    }
    
private:
    vector<string> words;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */