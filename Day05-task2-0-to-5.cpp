int convertFive(int n) {
    
    string string_of_n = to_string(n);
    
    for( int i = 0; i < string_of_n.size(); ++i){
        if( string_of_n[i] == '0' )
          string_of_n[i] = '5';
    }
    
    return stoi(string_of_n);
}