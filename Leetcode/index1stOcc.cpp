// 28. Find the Index of the First Occurrence in a String

class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = -1;
        bool status = false;
        for(int i = 0; i < haystack.size(); i++){
            if(haystack[i] == needle[0]){
                index = i;
                status = true;
                int k = i;
                for(int j = 0; j < needle.size(); j++){
                    if(haystack[k] != needle[j]){
                        index = -1;
                        status = false;
                        break;
                    }else{
                        k++;
                    }
                }
                if(status == true && index == i){
                    return index;
                }
            }
        }
        return -1;
    }
};