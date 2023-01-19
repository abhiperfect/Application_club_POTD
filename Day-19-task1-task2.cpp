/*-------------------Task1----------------*/
class Solution {
public:
    bool areOccurrencesEqual(string s) {
     map <char,int> hsh;
     for( int i = 0; i < s.size(); ++i){
        hsh[s[i]]++;
     }
     float sum = 0;
     float each;

    for( auto &it : hsh){
        sum += it.second;
        each = it.second;
    }        
    if( sum/hsh.size() == each) return true;
    return false;
    }    
};
/*-------------------Task2----------------*/
class Solution {
public:
    string sortString(string s) {
       int hsh[26] = {0};
       string ss;
       for( int i = 0; i < s.size(); ++i){
           hsh[s[i]-'a']++;
       }
       int count = -1;
       do{
      count =0;
       for( int i = 0; i < 26; ++i){
           if( hsh[i] > 0){
            ss+=char(i+'a');
            hsh[i]--;
            count++;
            }
       }
       for( int i = 25; i >= 0; --i){
           if( hsh[i] > 0){
            ss+=char(i+'a');
            hsh[i]--;
            count++;
            }
       }
     }while(count !=0);
        return ss;  
    }
};