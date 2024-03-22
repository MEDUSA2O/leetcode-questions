class MovingAverage {
    private:
    int size;
    vector<int>window;
    int windowSum;
public:
    MovingAverage(int size) {
        this -> size = size;
        windowSum = 0 ; 
        
    }
    
    double next(int val) {
        window.push_back(val);
        if(window.size() > size){
            windowSum += val - window.front();
            window.erase(window.begin());

        }
        else{
            windowSum += val;
        }
        return windowSum * 1.0 / window.size();
        
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */