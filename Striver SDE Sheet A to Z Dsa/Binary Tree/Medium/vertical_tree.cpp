class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
   {
       //Your code here
       vector<int> v;
       map<int,vector<int>> mp;
       queue<pair<int,Node*>> q;
       q.push({0,root});
       while(!q.empty())
       {
           int h=q.front().first;
           Node *t=q.front().second;
           mp[h].push_back(t->data);
           if(t->left)
           {
               q.push({h-1,t->left});
           }
           if(t->right)
           {
               q.push({h+1,t->right});
           }
           q.pop();
       }
       for(auto x:mp)
       {
           for(auto y:x.second)
           {
               v.push_back(y);
           }
       }
       return v;
   }
};