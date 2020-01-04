class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> strVec = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        map<string, int> map;
        for(int i=0;i<words.size();i++)
        {
            string str = words[i];
            string res;
            for(int j=0;j<str.size();j++)
            {
                res += strVec[str[j]-'a'];
            }
            map[res]=1;
        }
        return map.size();
        
    }
};