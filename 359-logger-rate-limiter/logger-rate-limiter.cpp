class Logger {

public:
    unordered_map<string, int> mp;
    const int TIMEOUT = 10;
    Logger() {}

    bool shouldPrintMessage(int timestamp, string message) {
        if (mp.find(message) != mp.end() && mp[message] > timestamp) {
            return false;
        }
        mp[message] = timestamp + TIMEOUT;
        return true;
    }
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */