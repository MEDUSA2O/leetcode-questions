#include <vector>
#include <string>
#include <sstream>
#include <deque>
#include <algorithm>

using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        deque<string> dirs;
        stringstream ss(path);
        string dir;
        
        while (getline(ss, dir, '/')) {
            if (dir.empty() || dir == ".") {
                continue;
            }
            if (dir == "..") {
                if (!dirs.empty()) {
                    dirs.pop_back();
                }
            } else {
                dirs.push_back(dir);
            }
        }
        
        string result = "/";
        while (!dirs.empty()) {
            result += dirs.front();
            dirs.pop_front();
            if (!dirs.empty()) {
                result += "/";
            }
        }
        
        return result;
    }
};
