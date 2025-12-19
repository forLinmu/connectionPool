#include<iostream>
using namespace std;

void sort(int arr[],int size){
  for(int i=0;i<size-1;++i){
    for(int j=0;j<size-1-i;++j){
      if(arr[j]>arr[j+1]){
        int tmp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=tmp;
      
      }
    
    }
  
  
  }

}
int main(){

int arr[]={1,3,72,9,34};
int size=sizeof(arr)/sizeof(arr[0]);
sort(arr,size);
for(int i:arr){
	cout<<i<<" ";
}
cout<<endl;

return 0;
}
