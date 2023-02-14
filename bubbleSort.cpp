#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int size=n;
    
    while(size--)  //this while loop count the rounds (Total rounds = size-1 )
    {
        
       for(int i=0;i<n;i++)  //this loop will hold the left neighour index
       {
            int neighour=i;  
            for(int j=i+1;j<n;) //this loop will hold the right neighour index
            {
                if(arr[neighour]>arr[j])  //if left neighour is >  right neighour
                {
                    swap(arr[neighour],arr[j]);  //then swap them 
                    break;                       //come out from the current loop
                }
                break;     //when we have to ignore the swapping this will help us to 
            }              //come out from current loop
       }
 }return;
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