#include <iostream>
#include <map>
#include <string>
using namespace std;
 class Solution
  {
   public:
    int romanToInt(string s) {

        map<char,int> romantoInt;
      romantoInt['I'] = 1;
      romantoInt['V'] = 5;
      romantoInt['X'] = 10;
      romantoInt['L'] = 50;
      romantoInt['C'] = 100;
      romantoInt['D'] = 500;
      romantoInt['M'] = 1000;


    int num, sum=0;

    for(int i=0; i<s.size(); i++)
    {
        if( i==s.size()-1 || romantoInt[s[i]]>=romantoInt[s[i+1]])
        num=romantoInt[s[i]];
        else
        {
        num=romantoInt[s[i+1]]-romantoInt[s[i]];
        i++;
        }
        
      sum=sum+num;
    }

   return{sum};
  }
};
