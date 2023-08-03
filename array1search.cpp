#include <iostream>
using namespace std;
int main()
{
    int var;
    int n;
    int arr [7];
    cout<<"Enter number: ";
    for (int i=0;i<7;i++){
    cin>>arr[i];  
    }
    cout<<"Enter the number to search: ";
    cin>>var;
    for (int i=0;i<7;i++){
    cout<<arr[i];
    }
    for (int i=0;i<7;i++){
   if(arr[i]==var){
   cout<<"\n The number is found at: "<<i;
    }
    }
    
    return 0;
    
}