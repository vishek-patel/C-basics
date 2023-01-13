
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5] = { 10 , 4, 2, 20,50};
    sort(arr,arr+5);
    for(int i:arr){
        cout<<i<<" ";
    }
    // cout<<"Hello World";

    return 0;
}
