class RandomizedSet {
public:
    std::map<int,bool> contents;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(!contents[val]){
            contents[val] = true;
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        return contents.erase(val);
    }
    
    int getRandom() {
        auto selection = contents.begin();
        std::advance(selection, rand() % contents.size());
        return selection->first;   
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */