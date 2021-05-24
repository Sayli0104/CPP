#include<iostream>
using namespace std;
int main()
{
    int arr[5],i;
  
    cout<<"Enter Numbers: ";
    for(i=0; i<5; i++)
        cin>>arr[i];
    cout<<"\nArray with Index\tIts Value\n";
    for(i=0; i<5; i++)
        cout<<"arr[i]"<<"\t\t\t"<<arr[i]<<endl;
    cout<<endl;
    return 0;
}
