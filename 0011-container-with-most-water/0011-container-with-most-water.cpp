class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0;
        int rp=height.size()-1;
    
    int curr=0;
    
    while(lp<rp){
curr=max(curr,(rp-lp)*min(height[lp],height[rp]));
if(height[lp]<height[rp]){
    lp++;
}else{
    rp--;
}

    }    
    return curr;
    }
};