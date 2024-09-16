class Solution {
  public:
    int maxLength(string& str) {
        // code here
        int maxi=0,maxi2=0,cl=0,op=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='(')op++;
            else cl++;
            if(cl==op)maxi=max(maxi,cl*2);
            if(cl>op)cl=op=0;
        }
        cl=op=0;
        for(int i=str.size()-1;i>=0;i--){
            if(str[i]=='(')op++;
            else cl++;
            if(op==cl)maxi2=max(maxi2,cl*2);
            if(op>cl)op=cl=0;
        }
        return max(maxi,maxi2);
        
        
    }
};