class Solution {
public:
    int countPrimes(int n) 
    {
        bool primes[n+1];
for(int i=0; i<n+1; i++){
primes[i] = 1;
}

    for(int i=2; i*i<n+1; i++){
        if(primes[i]){
            for(int j=i*i; j<n+1; j+=i){
                primes[j] = 0;
            }
        }
    }
    int count = 0;
    for(int i=2; i<n; i++){
        if(primes[i]){
            count++;
        }
    }
    return count; 
        }
