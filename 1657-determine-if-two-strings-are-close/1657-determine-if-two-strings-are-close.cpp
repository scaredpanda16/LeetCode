class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int len1 = word1.length();
        int len2 = word2.length();

        if (len1 != len2)
            return false;

        unordered_map<char, int> freq1, freq2;
        unordered_set<char> uniqueChar1, uniqueChar2;

        for (auto C : word1) {
            freq1[C]++;
            uniqueChar1.insert(C);
        }

        for (auto C : word2) {
            freq2[C]++;
            uniqueChar2.insert(C);
        }

        if (uniqueChar1 != uniqueChar2)
            return false;

        unordered_map<int, int> freqCount1, freqCount2;

        for (auto pair : freq1) {
            freqCount1[pair.second]++;
        }

        for (auto pair : freq2) {
            freqCount2[pair.second]++;
        }

        return freqCount1 == freqCount2;
    }
};