vector<int> minAnd2ndMin(int a[], int n) {
    vector< int > send;
    set< int > a_set;
  
    
    for(int i = 0; i < n ; ++i)
       a_set.insert(a[i]);
    
    if(a_set.size()!=1){   
    auto it=a_set.begin();
    send.push_back(*it);
    it=++it; 
    send.push_back(*it);
    }
    else
    send.push_back(-1);
    

    return send;
}