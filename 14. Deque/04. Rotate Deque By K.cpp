//Problem: https://practice.geeksforgeeks.org/problems/rotate-deque-by-k/1#

#include<bits/stdc++.h>
using namespace std;



//Function to rotate deque by k places in anti-clockwise direction.
void left_Rotate_Deq_ByK(deque<int> &deq, int n, int k)
{
    //in left rotation k becomes n-(k%n).
    k = n-(k%n);
    while(k--)
    {
        //popping out elements from back of the deque and adding 
        //them to the front of the deque.
        int val = deq.back();
        deq.pop_back();
        deq.push_front(val);
    }
}

//Function to rotate deque by k places in clockwise direction.
void right_Rotate_Deq_ByK(deque<int> &deq, int n, int k)
{
    //in right rotation k becomes k%n.
    k = k%n;
    while(k--)
    {
        //popping out elements from back of the deque and adding 
        //them to the front of the deque.
        int val = deq.back();
        deq.pop_back();
        deq.push_front(val);
    }
   
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
        
        deque<int> deq;
        for(int i = 1; i <= n; i++)
        {
            int val;
            cin>>val;
            deq.push_back(val);
            
        }
        int rotateQuery, k;
        cin>>rotateQuery>>k;
        
        
        
        if(rotateQuery == 1)
            right_Rotate_Deq_ByK(deq, n, k);
            
        else left_Rotate_Deq_ByK(deq, n, k);
        
        
        for(auto itr = deq.begin(); itr != deq.end(); itr++)
            cout << *itr << " ";
        cout << endl;
    }
    return 0;
}

  // } Driver Code Ends