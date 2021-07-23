//Problem : https://practice.geeksforgeeks.org/problems/dequeue-traversal/1



#include<bits/stdc++.h>
using namespace std;


//Function to traverse the Deque and print the elements of it.
void printDeque(deque<int> Deq)
{
    // your code here
    deque <int> :: iterator it;
    for (it = Deq.begin(); it != Deq.end(); ++it)
        cout<< *it<<" ";
    
    cout<<"\n";
}    
    

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        deque<int> Deq;
        for(int i = 0; i < n; i++)
        {
            int val;
            cin>>val;
            Deq.push_back(val);
        }
        printDeque(Deq);
        
    }
}
  // } Driver Code Ends