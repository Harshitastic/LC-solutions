/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void func(TreeNode* root,unordered_map<TreeNode*,TreeNode*>& mpp){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* cur=q.front();
            q.pop();
            if(cur->left){
                mpp[cur->left]=cur;
                q.push(cur->left);
            }
            if(cur->right){
                mpp[cur->right]=cur;
                q.push(cur->right);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>parent_track;
        func(root,parent_track);
        unordered_map<TreeNode*,bool> vis;
        queue<TreeNode*>q;
        q.push(target);
        vis[target]=true;
        int lvl=0;
        while(!q.empty()){
            int siz=q.size();
            if(lvl++==k) break;
            for(int i=0;i<siz;i++){
                TreeNode* cur=q.front();
                q.pop();
                if(cur->left && !vis[cur->left]){
                    q.push(cur->left);
                    vis[cur->left]=true;
                }
                if(cur->right && !vis[cur->right]){
                    q.push(cur->right);
                    vis[cur->right]=true;
                }
                if(parent_track[cur] && !vis[parent_track[cur]]){
                    q.push(parent_track[cur]);
                    vis[parent_track[cur]]=true;
                }

            }
        }
        vector<int>ans;
        while(!q.empty()){
            TreeNode* cur=q.front();
            q.pop();
            ans.push_back(cur->val);
        }
        return ans;

    }
};