#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
   for(int i=1;i<n;i++)  //it will count the rounds (Total round = size-1)
   {   //for round 1 to n-1
   
       for(int j=0;j<n-i;j++)  //it will visit the whole array
       {
           if(arr[j]>arr[j+1]) //if arr[j=0] > arr[j=1]
           {
               swap(arr[j],arr[j+1]);  //swap them
           }
       }                              //else ignore it and go for next iteration
   }
   return ;
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
  for(int i=0;i<size;i++)       //this loop is for printing the sorted array
    {
      bubbleSort(arr,size);  //function call
      cout<<arr[i]<<" ";
    }
    return 0;
}