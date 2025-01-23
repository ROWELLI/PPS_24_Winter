
// public class TreeNode
// {
//     public int val;
//     public TreeNode left;
//     public TreeNode right;
    
//     public TreeNode(int val = 0, TreeNode left = null, TreeNode right = null)
//     {
//         this.val = val;
//         this.left = left;
//         this.right = right;
//     }
// }
// namespace PPS
// {

//     public class A089
//     {
//        public TreeNode SortedArrayToBST(int[] nums)
//         {
//             return CreateNode(nums, 0, nums.Length-1);
//         }

//         public TreeNode CreateNode(int[] nums, int left, int right){
//             if(left > right){
//                 return null;
//             }
//             int mid = left + (right-left)/2;
//             TreeNode newTreeNode = new TreeNode(nums[mid]);
//             newTreeNode.left = CreateNode(nums, left, mid-1);
//             newTreeNode.right = CreateNode(nums, mid+1, right);
//             return newTreeNode;
//         }
//     }
// }