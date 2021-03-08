
#include <iostream>

using namespace std;

int main()
{
    int arr[9]={0,1,0,0,2,1,1,2,0};
    int low=0;
    int mid=0;
    int high=8;
    
    for(;mid<=high;){
        if(arr[mid]==0){
            int temp=arr[low];
            arr[low]=arr[mid];
            arr[mid]=temp;
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            int temp=arr[high];
            arr[high]=arr[mid];
            arr[mid]=temp;
            high--;
        }
    }
   
   
   for(int i=0;i<9;i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}
