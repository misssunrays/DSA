#include<iostream>
#include<conio.h>
using namespace std;
int binary_search(int arr[],int item,int size)
{
  int start,mid,end;
  start=0;
  end=size-1;

  while(start<=end)
  {
    mid=(start+end)/2;
    if(arr[mid]==item)
    {
        return mid;
    }
   else if(arr[mid]>item)
    {
        end=mid-1;
    }
    else if(arr[mid]<item)
    {
        start=mid+1;
    }
   
  }

    return -1; 
}
int main()
{
     int n,item;
    cout<<"enter the number of element:";
    cin>>n;
    int arr[n];
    cout<<"enter the array element below."<<endl<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<"enter "<<i+1<<" element of array:"<<endl;
        cin>>arr[i];
    }
    cout<<"enter the element you want to search:";
    cin>>item;


    int search=binary_search(arr,item,n);



    if(search==-1)
    {
    cout<<"element not found!!"<<endl;
    }
    else
    {
        cout<<"item found at "<<search<<"th index."<<endl;
        
    }
cout<<"bye bye!!"<<endl;
    
    return 0;
}