function TreeNode(val, left, right) {
    this.val = (val===undefined ? 0 : val)
    this.left = (left===undefined ? null : left)
    this.right = (right===undefined ? null : right)
}


// @param {TreeNode} root
// @return {number}

var sumNumbers = function(root) {
    let ans = 0;
    let dfs = (root, list) => {
        if (root == null)
            return;
        else if (root.left == null && root.right == null) {
            ans += Number(list.join('') + String(root.val));
        }
        list.push(String(root.val));
        dfs(root.left, list);
        dfs(root.right, list);
        list.pop();
    }
    dfs(root, []);
    return ans;
};