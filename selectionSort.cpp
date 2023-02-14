#include<iostream>
using namespace std;

void selectionSort(int arr[],int size)
{
  
  for(int i=0;i<size-1;i++)
    {
      int miniIndex=i;          //pehle element ko minimum man liya
      for(int j=i+1;j<size;j++) //subarray ke liye ye loop chalega
        {
          if(arr[j] < arr[miniIndex]) //agr subarray ka element array ke element se chota ho jaye
            miniIndex=j;              //array ke index ko subarray ka index de denge
        }
      swap(arr[miniIndex],arr[i]);    //swapping kra denge
    }
  return;
}
int main()
{
  int size;
  cout<<"Enter the size of array:";
  cin>>size;
  int arr[100];
  for(int i=0;i<size;i++)
  {
     cin>>arr[i];
  }
  for(int i=0;i<size;i++)
    {
      selectionSort(arr,size);
      cout<<arr[i]<<" ";
    }
    return 0;
}