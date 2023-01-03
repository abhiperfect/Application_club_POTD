class Solution{
public:	
		
	string removeVowels(string S) 
	{
	    string ss;
	    
	    for( char in : S){
	        if( in != 'a' && in != 'e' && in != 'i' && in != 'o' && in != 'u'){
	           ss+=in;
	        }
	    }
	    
	    return ss;
	}
};