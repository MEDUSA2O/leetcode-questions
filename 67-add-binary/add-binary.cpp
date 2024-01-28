class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1; 
        int j = b.length() - 1;
        int carry = 0;
        string ans = "";
        while( i >= 0 || j >= 0){
            int sum = carry;
            if( i >= 0 ){
                
                 sum += a[i--] - '0';
            }
             if( j >= 0 ){
                 sum += b[j--] - '0';
            }
            ans.insert(0,1,(sum % 2) + '0');
            carry = sum / 2;

        }
        if(carry != 0){
            ans.insert(0,1,'1');
        }
        return ans;
    }
};