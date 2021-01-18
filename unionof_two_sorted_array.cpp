vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    //Your code here
    //return vector with correct order of elements
    int i=0;
    int j=0;
    vector<int>arr;
    while(i<n && j<m)
    {
        if(i>0 && arr1[i]==arr1[i-1])
        {
            i++;
            continue;
        }
        if(j>0 && arr2[j]==arr2[j-1])
        {
            j++;
            continue;
        }
        if(arr1[i]<arr2[j])
        {
            arr.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            arr.push_back(arr2[j]);
            j++;
        }
        else
        {
            arr.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    while(i<n)
        {
            if(i==0 || arr1[i]!=arr1[i-1])
            {
                arr.push_back(arr1[i]);
            }
            i++;
        }
        while(j<m)
        {
            if(j==0|| arr2[j]!=arr2[j-1])
            {
                arr.push_back(arr2[j]);
            }
            j++;
        }
        return arr;
    
}