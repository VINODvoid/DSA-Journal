// STL - Standard Template Library
#include<bits/stdc++.h>
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
int main()
{
    // pairs();
    vectors();
    return 0;

}
