#include<iostream>

using namespace std;

void reverseArray(int *arr,int size) {

int start = 0;
int end = size-1;
while(start<=end) {
	int temp = arr[end];
	arr[end] = arr[start];
	arr[start] = temp;
	start++;
	end--;


}


}


int main() {


int arr[5]= { 2, 3, 10, 12 ,7};
for(int i : arr) {
cout<<i<<" ";

}
cout<<endl;
int size = 5;
reverseArray(arr,size);
for(int i : arr) {
cout<<i<<" ";

}

}