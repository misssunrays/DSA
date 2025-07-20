#include<iostream>
#include<conio.h>
using namespace std;
//linear search(sequential search)
int linear_search(int arr[],int item,int size)
{
 for (int i=0;i<size;i++)
 {
    if(arr[i]==item)
    {
        return i;
    }
   
        
    
 }
return -1;

}
int main ()
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

    int search=linear_search(arr,item,n);
    if(search==-1)
    {
    cout<<"element not found!!"<<endl;
    }
    else
    {
        cout<<"item is located in index "<<search<<" i.e "<<search+1<<"th element "<<endl;
        
    }
cout<<"bye bye!!"<<endl;
    

    return 0;
}