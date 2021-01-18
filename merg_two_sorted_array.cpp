class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        int k=0;
        int arr[n+m];
        while(i<m && j<n)
        {
            if(nums1[i]<=nums2[j])
            {
                arr[k]=nums1[i];
                k++;
                i++;
            }
            else{
                arr[k]=nums2[j];
                k++;
                j++;
            }
        }
        while(i<m)
        {
            arr[k]=nums1[i];
            k++;
            i++;
        }
        while(j<n)
        {
            arr[k]=nums2[j];
            k++;
            j++;
        }
        for(int l=0;l<m+n;l++)
        {
            nums1[l]=arr[l];
        }
        
    }
};