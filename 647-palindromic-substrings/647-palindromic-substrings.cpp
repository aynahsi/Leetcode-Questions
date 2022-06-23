class Solution {
public:
    bool palindrome(string ok){
        int n=ok.length();
        if(n==1) return true;
        int i=0;
        int j=n-1;
        while(i<=j){
            char front=ok[i];
            char back=ok[j];
            if(front!=back)
                 return false;
                else {i++;
            j--;}

        };
        return true;
    }

        
        
    
    int countSubstrings(string s) {
        int count=0;
        
        for(int i=0;i<s.length();i++){
            string oh="";
            for(int j=1;j<=s.length()-i;j++){
                string ok= s.substr(i,j);
               if (palindrome(ok)==true){
                   count++;
                                       }

            }
                
        }
        return count;
    }
};