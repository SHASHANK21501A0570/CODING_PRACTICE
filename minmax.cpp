#include<iostream>
using namespace std;
void minmax(int A[],int n,&max,&min,int low,int high){
int i=0,j=n-1;
 if(n==1){
  return (max=min=A[i]);
 }
else
if(n==2){
   if(A[i]<A[j]){
       min=A[i];
       max=A[j];
   }
   else{
        min=A[j];
        max=A[i];
   }
}
else{
   int mid=(low+high)/2;
   if(low<high){
      mimmax(A,low,mid,min,max);
      minmax(A,mid+1,high,min1,max1);
      if(min1<min){
          min=min1;
      }
      if(max1>max){
          max=max1;
      }

   }
}

}
int main(){
int n,i,j;
int arr[100];
cout<<"enter no of elements:";
cin>>n;
cin<<"enter elements:";
for(i=0;i<n:i++){
   cin>>arr[i];
}
minmax(arr,0,n-1);
cout<<"minimum element is:";
cout<<"maximum element is:";
}
