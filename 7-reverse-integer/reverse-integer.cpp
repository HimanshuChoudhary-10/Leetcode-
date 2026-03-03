#include<climits>
class Solution {
public:
    int reverse(int x) {
       long long temp=0;
        while(x!=0){ 
        int a=x%10;
        x=x/10;
        temp=temp*10+a;
        } 
        if(temp<INT_MIN||temp>INT_MAX){
            return 0;
        }
    return temp;  }  
};