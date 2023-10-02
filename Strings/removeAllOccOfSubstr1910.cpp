class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(1) {
            int found = s.find(part);
            if(found == string::npos) break;

            // remove karna hai
            string leftPart = s.substr(0, found);
            string rightPart = s.substr(found + part.size(), s.size());

            // concat both part
            s = leftPart+rightPart;
        }
        return s;
    }
};