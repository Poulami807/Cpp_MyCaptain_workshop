//Accessing elements of an array using pointer

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    int arr[n], *p;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    p=arr;
    cout<<"The elements of the array are(accessed using pointer):"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*p<<endl;
        p++;
    }
    return 0;
}
