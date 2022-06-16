class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
      int peak=0;
      if(arr.size() < 3){
          return false;
      }
        
       for(int i=0;i<arr.size()-1;i++){ 
           if(arr[i]==arr[i+1]){
               return false;
           }
           
           if(arr[i]>arr[i+1]){
              peak=i;
              break;
          }
           
          
       }
       
       if(peak==0){
           return false;
       }
       for(int i=peak;i<arr.size()-1;i++){
           if(arr[i]<=arr[i+1]){
               return false;
           }
       }  
         return true; 
    }
};