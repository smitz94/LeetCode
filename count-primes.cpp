class Solution {
public:
    int countPrimes(int n) {
        
        if(n<=2)
            return 0;
        
        bool isprime[n];
        int count=0;
        for(int i=0;i<n;i++)
            isprime[i]=true;
        
        for(int i=2;i<n;i++)
        {   
            if(isprime[i])
            {
                count++;
                if(i<sqrt(n)) // to avoid overflow !!!!
                {     
                    for(int j=0;i*(i+j)<n;j++)
                    {
                        isprime[i*(i+j)]=false;
                    }
                }
            }
        }
        
        return count;
    }
};
