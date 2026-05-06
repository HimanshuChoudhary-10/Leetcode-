class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long o=x;
        long long rev=0;
        while(x>0){
        rev=rev*10+(x%10);
        x=x/10;
        }
        if(rev==o){
            return true;
        }
       return false; 
    }
};