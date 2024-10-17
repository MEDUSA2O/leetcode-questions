class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        istringstream s1(sentence1);
        istringstream s2(sentence2);
        deque<string> d1((istream_iterator<string>(s1)),
                         istream_iterator<string>());
        deque<string> d2((istream_iterator<string>(s2)),
                         istream_iterator<string>());
        while (!d1.empty() && !d2.empty() && d1.front() == d2.front()) {
            d1.pop_front();
            d2.pop_front();
        }
        while (!d1.empty() && !d2.empty() && d1.back() == d2.back()) {
            d1.pop_back();
            d2.pop_back();
        }
        return d1.empty() || d2.empty();
    }
};