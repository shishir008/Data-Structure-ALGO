class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        bool checker=true;
            int sub=10;
            n=n-sub;
            while(n>0){

                sub--;
                if(n-sub>=0){
        
                    checker=!checker;
                }

               n=n-sub;
        
            }
            return checker;
    
        
    }
};