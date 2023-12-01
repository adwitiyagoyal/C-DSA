  #include<iostream>
  #include<vector>

  using namespace std;

  int main(){
    //initialising with size and  element
    vector<int> v(5,1) ;       //size -> 5   all element ->1
    for(int i:v){              // if we will not initialise first element all elemnts will be 0
        cout<<i<<" ";
    }cout<<endl; 
     

   //COPYING ELEMENTS OF VECTOR IN ANOTHER VECTOR
   vector<int> copyOfa(v); 
   for(int i:copyOfa){              
        cout<<i<<" ";
    }cout<<endl;                    

   
    cout<<"capacity -> "<<v.capacity()<<endl; //initially capacity is 0
                                              //as the values are inserted the vector capacity becomes double
    v.push_back(1);
    cout<<"capacity -> "<<v.capacity()<<endl; 

    v.push_back(2);
    cout<<"capacity -> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity -> "<<v.capacity()<<endl;
    cout<<"size of vector -> "<<v.size()<<endl;

    cout<<"element at 2nd index : "<< v.at(2)<<endl;

    cout<<"front element : "<<v.front()<<endl;
    cout<<"back element : "<<v.back()<<endl;

    //POPPING -> removing the last element from vector
    cout<<"before popping "<<endl;
    for(int i:v){
        cout<<i<<" ";/
    }   cout<<endl;

    v.pop_back();
    cout<<"after popping "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }   cout<<endl;

    //CLEARING OF VECTOR
    cout<<"before clearing size : "<<v.size()<<endl;
    v.clear();
    cout<<"after clearing size : "<<v.size()<<endl;

     //initialising withOUT size and all element
    vector<int> n;


  }