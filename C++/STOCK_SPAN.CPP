// contributed by Yogesh_729(www.github.com/Yogesh_729)

#include <iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> st;
    int arr[]={1,4,2,3,4,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=1;
    int ans[n];
    ans[0]=1;
    st.push(arr[0]);
    // stack to store the index of elements
    while(i<n)
    {
        if(st.top()>arr[i])
        ans[i]=1;
        
        else{
            while(!st.empty() && st.top()<=arr[i])
            st.pop();
           ans[i]=i - st.size();
        }
        st.push(arr[i]);
        i++;
    }
    // printing the elements of the array.
    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
    

    return 0;
}
