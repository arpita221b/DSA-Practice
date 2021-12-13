#include <iostream>
using namespace std;


void display(int ar[], int n){
  cout<<"\n";
  for (int i = 0; i < n; i++) {
  cout<<ar[i]<<" ";
  }

}
void linearSearch(int ar[],int size,int num){
  int pos;
  for(int i = 0; i< size; i++)
  if( num == ar[i]){
    pos = i+1;
    cout<<"\nElement found at index: "<<i<<" and position: "<<pos;
    
    break;
  }

}
int main(){
  int n,element;
  cin>>n;
  int ar[n];
  for (int i = 0; i < n; i++) {
    cin>>ar[i];
  }
  cout<<"Enter element: \n";
  cin>>element;
display(ar,n);
linearSearch(ar,n,element);

}
