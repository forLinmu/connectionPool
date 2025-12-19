#include<iostream>
using namespace std;

void sort(int arr[],int size){
	bool flag=false;
 for(int i=0;i<size-1;++i){
  for(int j=0;i<size-1;++j){
    if(arr[j]>arr[j+1]){
      int tmp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=tmp;
      flag=true;
}
if(!flag)break;
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
cout<<"这是一次错误的修改"<<endl;

return 0;
}
