#include<iostream>
#include<conio.h>
using namespace std;
int binary_search_recursion(int arr[],int item,int start,int end)
{
    int mid;
    if(start<=end)
    {
         mid=start+(end-start)/2;
    

        if(arr[mid]>item)
        {
            //end=mid-1;
         return binary_search_recursion(arr,  item, start, mid-1);
        }

       else if(arr[mid]<item)
        {
            //start=mid+1;
         return binary_search_recursion(arr,  item, mid+1, end);

        }
        else{
            return mid;
        }
    }
        return -1;
    
}
int main()
{
    int item;
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"ennter the item to search"<<endl;
    cin>>item;
    int search=binary_search_recursion( arr,item,0,n-1);
    if(search != -1)
        cout << "Item found at index: " << search << endl;
    else if (search==-1)
        cout << "Item not found." << endl;
    
    return 0;
}