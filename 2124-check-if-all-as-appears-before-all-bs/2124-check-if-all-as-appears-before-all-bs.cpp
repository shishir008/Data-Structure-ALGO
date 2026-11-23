class Solution {
public:
    bool checkString(string s) {
           bool check=false;
           int countofa=0;
        for(int i=0;i<s.size();i++){
if(s[i]=='b'){
    check=true;
    continue;
}
if(check==true && s[i]=='a'){
    check = false;
    break;
}
   countofa++;
        }
        if(countofa==s.size()) return true;
        return check;
        
    }
};