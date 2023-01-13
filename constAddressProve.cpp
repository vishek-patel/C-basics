#include<iostream>

using namespace std;

void constAddressProve(int *arr,int size) {

	for(int i = 0;i<size;i++){
		cout<<"The address of : "<<i<<" is : "<<&arr[i]<<endl;

	}

}


int main() {
	const int size = 5;
	int arr[size] = { 10 , 20 , 30 , 40 , 50 };
	constAddressProve(arr,size);

}