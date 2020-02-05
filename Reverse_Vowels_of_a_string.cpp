#include<iostream>
#include <string>
using namespace std;
      bool isVowel(char c) {
        c = tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
class Solution {
public:
    
  
string reverseVowels(string s) {
	int st = 0, en = s.length() - 1;
	while(st < en) {
		if(isVowel(s[st]) && isVowel(s[en])) {
			swap(s[st++], s[en--]); 
		} else if(!isVowel(s[st])) {
			st++;
		} else if(!isVowel(s[en])) {
			en--;
		}
	}
	return s;
}
    
};

int main() {
 /*Input: "hello"
  Output: "holle" */

         string s  =  "hello";
         
        string ret = Solution().reverseVowels(s);
        cout<<"ret "<<ret<<endl;

           
    return 0;
}