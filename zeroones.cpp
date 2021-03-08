
#include <iostream>

using namespace std;

int main()
{
    int arr[9]={0,1,0,0,1,1,1,0,0};
    
    int one=0;
    for(int i=0;i<8;i++){
        if(arr[i]==1)
        one++;
        
        arr[i]=0;
    }
    for(int i=8-one+1;i<9;i++){
        arr[i]=1;
    }
    for(int i=0;i<=8;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
