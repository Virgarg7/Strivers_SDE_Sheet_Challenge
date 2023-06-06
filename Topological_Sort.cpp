#include <bits/stdc++.h>
using namespace std;

/*
Actual me ye saare nodes tasks ko represent krte hai or jo directions hai wo dependencies ko 
represent krti hai...indegree 0 ka mtlab hai ki wo task kisi pr dependent nahi hai usko 
complete kr skte hai...usko complete krne k baad us k adjacent nodes ki indegree ek kam 
hojaegi kyu ki ek task kam ho gya hai... topological sorting se basically Hume ek order 
milta hai tasks ko complete krne ka bina kisi conflict k...dependencies ko kese resolve 
krna hai ye btata hai topological order
*/

class Solution
{
private:
    void dfs(int node, int vis[], vector<int> &ans, vector<int> adj[])
    {
        vis[node] = 1;
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                dfs(it, vis, ans, adj);
            }
        }
        // We are Inserting that node which is most dependent and innermost 
        ans.push_back(node);
    }

public:
    // Function to return list containing vertices in Topological order.
    vector<int> topoSort(int V, vector<int> adj[])
    {
        int vis[V] = {0};
        vector<int> ans;
        
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                dfs(i, vis, ans, adj);
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{

    // V = 6;
    vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}};
    int V = 6;
    Solution obj;
    vector<int> ans = obj.topoSort(V, adj);

    for (auto node : ans)
    {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}