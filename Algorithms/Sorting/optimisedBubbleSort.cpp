// Optimised bubble sort
#include<iostream>
using namespace std;

void bubbleSort(int a[], int n){

  for (int i = 0; i < n-1; i++) {
    bool flag = false;
    for (int j = 0; j < n-1-i; j++) {
     if(a[j] > a[j+1]){
       swap(a[j], a[j+1]);
       flag = true;
     }
    }
    if(flag == false) break; //array is already sorted
  }

}

int main(){
  int n;
  cin>>n;
  int a[n];
  for (int i = 0; i < n; i++) {
  cin>>a[i];
  }
  bubbleSort(a,n);
  for (int i = 0; i <n; i++) {
    cout<<a[i]<<" ";
  }
  return 0;
}
