

#include <iostream>
using namespace std;

// function to reverse an Array
int reverse(int a[], int n)
{

    int end = n - 1;
    int start = 0;

    while (start != end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

// function to print array
int printarray(int arr[], int n)
{
    cout << "Reverse Array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}


//main function is start  from here
int main()
{
    int arr[50],  x; // x=size of array
    cout << "enter your array size";
    cin >> x;

    cout<<"Enter your array"<<endl;
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    cout << "Array you enter: "<<endl ;
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " " <<endl;
    }

    reverse(arr, x);    // passing argumnet to reverse function
    printarray(arr, x); // passing argument to prinarray function to print reverse array

    return 0;
}