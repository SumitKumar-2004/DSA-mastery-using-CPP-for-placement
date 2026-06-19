//Leetcode 682 : Baseball Game
#include<bits/stdc++.h>
using namespace std;
int calPoints(vector<string> &operations){
   stack<int> st;

   for(string op : operations){
      //remove previous score
      if(op == "C"){
         st.pop();
      }else if(op == "D"){
         //double previous score
         st.push(2 * st.top());
      }else if(op == "+"){
         //sum of previous two scores
         int first = st.top();
         st.pop();
         int second = st.top();
         st.push(first);//restore first
         st.push(first + second);
      }else{
         //normal number
         st.push(stoi(op));
      }
   }
   //calculate final score
   int finalScore = 0;
   while(!st.empty()){
      finalScore += st.top();
      st.pop();
   }
   return finalScore;
}

int main(){
   vector<string> op = {"5","2","C","D","+"};
   cout<<calPoints(op);
}