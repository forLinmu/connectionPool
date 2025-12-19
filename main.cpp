#include<iostream>
using namespace std;

void sort(int arr[],int size){


}
int main(){

int arr[]={1,3,72,9,34};
int size=sizeof(arr)/sizeof(arr[0]);
sort(arr,size);
for(int i:arr){
	cout<<i<<" ";
}
cout<<endl;
cout<<"这是一次错误的修改"<<endl;

return 0;
}