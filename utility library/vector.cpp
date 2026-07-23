//vector is used due to its dynamic in nature 
//when we dont know about the size of data structure then we use vector cus its dynamic unlike array which is connstant in size
#include <bits/stdc++.h>
using namespace std;
void explainvector(){

    vector<int> lol; //declaring an vector {vector , <datatype> identifier}
 
      lol.push_back(3); //add 3 into vector

      lol.emplace_back(2); //push 2 in the vector and increase its size and its faster than push_back

    vector<pair<int,int>> me;
        me.push_back({1,4}); //require curly braces to allot value
        me.emplace_back(1,4); //doesn't require any curly braces
    
    vector<int> v(6,89); //size of a vector like {size, value} it'll make v={89,89,89,89,89};

    vector<int> g(4); //it'll create like g={0,0,0,0}
    
    vector<int> fahh(2,23);
        fahh.push_back(6);
        fahh.push_back(78);
    vector<int> fahhcopy(fahh);//it'll replicate the value of fahh

    vector<int>::iterator it =fahh.begin();
    it++;
    it=it+2;
    cout<<*(it)<<" ";
}
int main(){
explainvector();


    
    return 0;
}