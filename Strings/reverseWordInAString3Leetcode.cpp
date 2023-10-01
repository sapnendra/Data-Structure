class Solution {
public:
    string reverseWords(string str) {
        int size = str.length();
        int indx = -1;
        for(int i=0; i<size; i++) {
            if(str[i] == ' ') {
                int j=indx+1;
                int k=i-1;
                while(j < k) {
                    swap(str[j], str[k]);
                    j++;
                    k--;
                }
                indx = i;
            }
            if(i == (size-1)) {
                int j=indx+1;
                int k=i;
                while(j < k) {
                    swap(str[j], str[k]);
                    j++;
                    k--;
                }
                indx = i;
            }
        }
        return str;
    }
};