#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> arr = {1,1,1,2,2,3,3,3,3,4,4};
   int i = 0;
   for(int j=1;j<arr.size();j++){
      if(arr[j] != arr[i]){
         i++;
         arr[i] = arr[j];
      }
   }
   int k = i+1;
   cout << "Unique count = " << i + 1 << "\n";
    cout << "Array after removing duplicates: ";
    for (int x = 0; x < k; x++) {
        cout << arr[x] << " ";
    }
    cout << endl;
}