bool ispar(string x)
    {
        stack<char> s;
        for(int i = 0;i<x.size();i++){
            if(x[i] == '(' || x[i] == '{' || x[i] == '['){
                s.push(x[i]);
            }else if((s.size() != 0) && ((s.top() == '(' && x[i] == ')') 
                                     || (s.top() == '{' && x[i] == '}') 
                                     || (s.top() == '[' && x[i] == ']'))){
                s.pop();
                
            }else{
                return false;
            }
        }
        
        
        if(s.size() == 0){
            return true;
            
        }else{
            return false;
        }
        
    }