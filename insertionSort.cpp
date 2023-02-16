#include<iostream>
using namespace std;

void insertionSort(int arr[],int n)
{
  for(int i=1;i<n;i++)
    {
      int j;
      int temp=arr[i];   //first element ko temp variable me copy kr denge 
                        //aur usi se pure array ko traverse krte hue compare karenge
      for(j=i-1;j<=0;j--)
        {
          if(arr[j] > temp) //leftpart is greater than right one which is in temp
          {
            arr[j+1]=arr[j];  //shift leftpart by 1 place
          }
          else     //jo already sorted order me hai usko waise hi chor denge
            break; //loop se bahar a jayenge
        }
      arr[j+1]=temp;  //jb koi shifting nhi hui iska matlb element apne true
                    //position pr hai usko waise hi copy kr denge array me.
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
      insertionSort(arr,size);  //function call
      cout<<arr[i]<<" ";
    }
    return 0;
}