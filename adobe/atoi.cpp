class Solution{
  public:
    /*You are required to complete this method */
    bool isvalid(char x){
        int ch = x - '0';
        if(ch < 0 or ch > 9){
            return false;
        }
        return true;
    }
    int atoi(string str) {
        //Your code here
        int sign = 1, i = 0, res = 0;
        if(str[0] == '-'){
            sign = -1;
            i++;
        }
        for(; i<str.size(); i++){
            if(isvalid(str[i]) == false){
                return -1;
            }
            res = res*10 + (str[i] - '0');
        }
        return res*sign;
    }
};
