// STL - Standard Template Library
#include<bits/stdc++.h>
#include <unordered_set>
using namespace std;

void pairs()
{
    pair<int,int> p = {1,1};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int , pair<int,int>> p1 = {1,{2,3}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[2].second<<endl;
}
void vectors()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    v.emplace_back(3);
    cout<<v[2]<<endl;

    // datatype as pairs
    vector<pair<int,int>> vec ;
    vec.push_back({1,2});
    vec.emplace_back(3,4);
    cout<<vec[0].first<<" "<<vec[0].second<<endl;
    cout<<vec[1].first<<" "<<vec[1].second<<endl;


    // declaration of vectors 
    vector<int> vtr(5,20); // size of the vector is 5
    cout<<vtr.size()<<endl;
    cout<<vtr[0]<<endl;
    vector<int>vtr1(vtr);
    cout<<vtr1.size()<<endl;
    cout<<vtr1[0]<<endl;

    // accessing the elements of the vector
    // 1. using the iterator
    vector<int>::iterator it = v.begin(); // points to the first element
    it++;
    cout<<*(it)<<" "<<endl;

    vector<int>::iterator it1 = v.end();  // points to the next of the last element
    it1--;
    cout<<*(it1)<<" "<<endl;

    // vector<int>::iterator it2 = v.rend(); // points to the previous of the first element
    // vector <int>::iterator it3 = v.rbegin(); // points to the last element


    cout<<v[0]<< " "<<v.at(0)<<endl;
    cout<<v.back()<<endl; // last element
    cout<<v.front()<<endl; // first element

    // printing the vectors
    //  use of for loop
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";

    }
    cout<<endl;
    // use of iterator
    for(vector<int>::iterator it = v.begin();it!=v.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    // use of auto keyword
    for(auto it = v.begin();it!=v.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    // use of for each loop
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    // deleting the elements from the vector
    v.erase(v.begin()+1);
    cout<<v.size()<<endl;

    v.erase(v.begin()+1,v.begin()+2);


    // insertion of the elements in the vector
    vector<int>vect(2,100);
    vect.insert(vect.begin(),300);
    vect.insert(vect.begin()+1,200);
    

    vect.insert(v.begin()+1,2,5);
    // cout<<vect[2]<<endl;
    // cout<<vect[3]<<endl;
    

    // copy the elements of the vector to another vector
    vector<int> vect1(2,50);
    v.insert(v.begin(),vect1.begin(),vect1.end());
    

    v.pop_back(); // removes the last element
    v.swap(vec); // swaps the elements of the vector
    cout<<v.size()<<endl; // size of the vector

    v.clear(); // removes all the elements of the vector
    cout<<v.empty(); // checks whether the vector is empty or not
    
}
void lists(){
    list<int> ls;
    ls.push_back(1); // {1}
    ls.emplace_back(2); // {1,2}

    ls.push_front(3); // {3,1,2}
    ls.emplace_front()=(4,5); // {4,5,3,1,2}

    // rest functions are same as vectors
    // begin , end , rbegin , rend , clear , insert , size,swap
}
void deques(){
    deque<int> dq;
    dq.push_back(1); // {1}
    dq.push_front(2); // {2,1}
    dq.emplace_back(3); // {2,1,3}
    dq.emplace_front(4); // {4,2,1,3}

    // rest functions are same as vectors
    // begin , end , rbegin , rend , clear , insert , size,swap
    dq.pop_back(); // {4,2,1}
    dq.pop_front(); // {2,1}

}
void stacks()
{
    stack<int>s;
    s.push(1); // {1}
    s.push(2); // {2,1}
    s.push(3); // {3,2,1}
    s.push(4); // {4,3,2,1}
    s.emplace(5); // {5,4,3,2,1}

    cout<<s.top()<<endl; // 5
    s.pop(); // {4,3,2,1}
    cout<<s.size()<<endl; // 4
    cout<<s.empty()<<endl; // 0 - false

    stack<int>st1,st2; 
    st1.swap(st2); // swaps the elements of the stack
    
}
void queues()
{
    queue<int>q;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.emplace(3); // {1,2,3}

    q.back(); // 3 - last element in queue
    cout<<q.front()<<endl; // 1 - first element
    q.pop(); // {2,3}

}
void prioritys()
{
    // maximum heap
    priority_queue<int>pq;
    pq.push(1); // {1}
    pq.push(2); // {2,1}
    pq.push(3); // {3,2,1}
    pq.emplace(4); // {4,3,2,1}

    cout<<pq.top()<<endl; // 4
    pq.pop(); // {3,2,1}
    cout<<pq.size()<<endl; // 3

    // size swap empty functions are same as stack
    // minimum heap 
    priority_queue<int ,vector<int> , greater<int>>pq1;
    pq1.push(1); // {1}
    pq1.push(2); // {1,2}
    pq1.push(3); // {1,2,3}
    pq1.emplace(4); // {1,2,3,4}

    cout<<pq1.top()<<endl; // 1
}
void sets()
{
    // set is a container that stores unique elements and in sorted order.
    set<int>s;
    s.insert(1); // {1}
    s.emplace(2); // {1,2}
    s.insert(3); // {1,2,3}
    s.insert(4); // {1,2,3,4}

    // Functionality of insertion is same as vector

    auto it = s.find(3); // returns the iterator to the element 3
    auto it = s.find(11);// returns the iterator to the end of the set

    s.erase(3); // {1,2,4} - removes the element 3

    int count = s.count(4); // 1 - returns the count of the element 4 but set as unique elements so it will be 1 or 0.


    auto it = s.find(3);
    s.erase(it); // {1,2,4} - removes the element 3


    auto it = s.lower_bound(2);
    auto it = s.upper_bound(2);

}
void multisets()
{
    // Multiset is a container that stores multiple elements and in sorted order.
    multiset<int>ms;
    ms.insert(1); // {1}
    ms.insert(2); // {1,2}
    ms.insert(2); // {1,2,2}

    ms.erase(2); // removes all the elements of 2
    ms.erase(ms.find(2)); // removes the first element of 2

}
void unorderedsets()
{
   unordered_set<int>us;
    
}
void maps()
{
    map<int,int>mp;
    map<int, pair<int,int> >mp1;
    map<pair<int,int>,int>mp2;

    mp[1] = 2; // {1:2}
    mp.emplace(2,3); // {1:2,2:3}

    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<mp[1];
    cout<<mp.at(5); // returns null 


}
void multimaps()
{
    // everything is same as map but  we can store duplicate keys
    multimap<int,int>mp;
}
int main()
{
    // pairs();
    // vectors();
    // lists();
    // deques();
    // stacks();
    // queues();
    // prioritys();
    // sets();
    // multisets();
    // unorderedsets();
    //maps();
    // multimaps();
    
    return 0;

}
