class FirstUnique {
private:
    queue<int> q;
    unordered_map<int, int> mp;

public:
    FirstUnique(vector<int>& nums) {
        for (auto i : nums) {
            add(i); 
        }
    }

    int showFirstUnique() {
        while(!q.empty() && mp[q.front()] > 1){
            q.pop();
        }
        if(q.empty()){
            return -1;
        }
        return q.front();
    }

    void add(int value) {
        q.push(value);

        mp[value]++;
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */