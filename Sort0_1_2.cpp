#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   
   int cnt1 = 0 ;
   int cnt2 = 0 ;
   int cnt3 = 0 ;

   for(int i=0;i<n;i++){
      if(arr[i]==0){
         cnt1++ ;
      }
      else if(arr[i]==1){
         cnt2++ ;
      }
      else{
         cnt3++ ;
      }
   }

   int i = 0 ;
   while(cnt1>0){
      arr[i++] = 0 ;
      cnt1-- ;
   }

   while(cnt2>0){
      arr[i++] = 1 ;
      cnt2-- ;
   }

   while(cnt3>0){
      arr[i++] = 2 ;
      cnt3-- ;
   }


}
