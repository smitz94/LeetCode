class Solution {
public:
    
    int search(vector <int> &a,int start,int end)
    {
       if(end>=start){
            int mid=start+((end-start)/2);
        
        if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
            return mid;
        
        else if(a[mid]>a[mid-1] && a[mid]<a[mid+1])
                return search(a,mid+1,end);
        else if (a[mid]<a[mid-1] && a[mid]>a[mid+1])
                return search(a,start,mid-1);
       }
        
        return -1;
    }
    
    int peakIndexInMountainArray(vector<int>& A) {
        int ans;
        
        ans= search(A,0,A.size()-1);
        
        return ans;
    }
};
