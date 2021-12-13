#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int a[],int n,int key){

         int l = 0, h = n-1;
         while(l<=h){
            int mid = l + (h-l)/2;

            if(a[mid] == key){
                return mid;
            }else if(a[mid] > key){
                h = mid-1;
            }else{
                l = mid + 1;
            }
         }
         return -1;

}

int main(){

   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }

   cout<<"enter key"<<endl;
   int key;
   cin>>key;

   sort(a,a+n);

   int pos = BinarySearch(a,n,key);
   if(pos == -1){
    cout<<"key not found"<<endl;
   }else{
       cout<<"key found at index "<<pos<<endl;
   }

   return 0;
}
