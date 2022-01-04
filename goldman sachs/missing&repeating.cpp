class Solution{
public:
    int *findTwoElement(int *arr, int n) {
     // unordered_map<int,int> m;
      int a[2];
      sort(arr,arr+n);
      int m;
      int r;
      long long int s1=0,s2=0;
      for(int i=0;i<=n-2;i++)
      {
          if(arr[i]==arr[i+1])
          {
          r=arr[i];
          }
          s1+=arr[i];
          s2+=(i+1);
      }
      s1=s1+arr[n-1]-r;
      m=s2+n-s1;
      a[0]=r;
      a[1]=m;
      int *p=a;
      return p;
    }
};