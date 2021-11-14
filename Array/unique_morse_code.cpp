//  Unique Morse Code Words



class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& a) {
vector<string>t = 
{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string>st;
        
        for(int i=0;i<a.size();i++)
        {   
            string x = a[i];
            string r="";
            for(int j=0;j<x.length();j++)
            {
                r = r + t[x[j]-'a'];
            }
            st.insert(r);
            r="";
        }
        return st.size();
        
    }
};
