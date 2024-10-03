// mine solution 
class Solution {
public:
bool primenumber(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
    int countPrimes(int n) {
        int count=0;
        for(int i=2;i<n;i++){
            if(primenumber(i)==true){
                count++;
            }

        }
        return count;
        
    }
};
//mine solution

//optimized solution
class Solution {
public:
    int countPrimes(int n) {
        if(n<2){
            return 0;
        }
        vector<bool> isprime(n,true);
        isprime[0]=isprime[1]=false;
        for(int i=2;i<sqrt(n);i++){
            if(isprime[i]){
                for(int j=i*2;j<n;j+=i){
                    isprime[j]=false;
                }
            }

        }
        int count=0;
        for(int i=0;i<n;i++){
            if(isprime[i]){
                count++;
            }
        }


     
        return count;
        
        
    }
};
//optimized solution