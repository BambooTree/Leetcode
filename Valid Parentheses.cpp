#include <iostream>
#include<stack>
#include<string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
         // Start typing your C/C++ solution below
        // DO NOT write int main() function
        stack<char> st;
        for (int i=0;i<s.size();i++)
        {                    
            if ((s[i]=='(') ||(s[i]=='[') ||(s[i]=='{')) 
                {
                    st.push(s[i]);
                }
            else
            {   
                if (st.empty()){return false;}
                if ((s[i]==')') && (st.top()!='(')) {return false;}
                if ((s[i]=='}') && (st.top()!='{')) {return false;}
                if ((s[i]==']') && (st.top()!='[')) {return false;}
                st.pop();
            }
            
        }
        return st.empty();
    }
};

int main()
{
    
    /*
    Input: "()[]{}"     Output: true 
    
    Input: "(]"     Output: false
 */
   string str = "()[]{}";
   bool result = Solution().isValid(str);
   cout<<"result "<<result<<endl;
   return 0;

}