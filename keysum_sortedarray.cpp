
#include <iostream>

using namespace std;

int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int key=11;
    int sum=0;
    for(int i=0,j=7;i<j;){
        sum=arr[i]+arr[j];
        if(sum==key){
            cout<<arr[i]<<" : "<<arr[j]<<"\n";
            i++;
        }
        else if(sum>key){
            j--;
        }
        else if(sum<key){
            i++;
        }
    }

    return 0;
}
