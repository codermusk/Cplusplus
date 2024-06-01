class Solution {
public:
    string decodeString(string s) {
        stack<char> stk ; 
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] != ']'){
                stk.push(s[i]);
            }else{
                string currentText = "" ; 
                while(stk.top()!='['){
                    currentText = stk.top() + currentText;
                    stk.pop();
                }
                stk.pop() ;
                string number = "" ; 
                while(!stk.empty() && isdigit(stk.top())){
                    number = stk.top() + number ; 
                    stk.pop();
                }
                int times = stoi(number);
                cout << currentText ;
                while(times--){
                    for(int k = 0 ; k < currentText.size() ; k++){
                        stk.push(currentText[k]);
                    }
                }
            }
        }
        s = "" ; 
        while(!stk.empty()){
            s = stk.top() + s ;
            stk.pop();
        }
        return s ;
    }
};
