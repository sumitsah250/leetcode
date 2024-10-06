class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;
        int sum=0;
        string result ="";
        while(i>=0 || j>=0 || carry==1){
            sum=carry;
            if(i>=0){
                sum=sum+a[i]-'0';
                i--;
            }
            if(j>=0){
                sum=sum+b[j]-'0';
                j--;
            }
            result=to_string(sum%2)+result;
            carry=sum/2;
        }
        return result;
        
    }
};