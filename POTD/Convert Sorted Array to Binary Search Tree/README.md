# Convert Sorted Array to Binary Search Tree

Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.

 

Example 1:

![image](https://user-images.githubusercontent.com/87473469/183924814-a20e7672-1ad6-4b9a-b07b-db53177884ed.png)


Input: nums = [-10,-3,0,5,9]
Output: [0,-3,9,-10,null,5]
Explanation: [0,-10,5,null,-3,null,9] is also accepted:

![image](https://user-images.githubusercontent.com/87473469/183924861-ce739336-7313-4a4d-974a-78e879b837bc.png)

Example 2:

![image](https://user-images.githubusercontent.com/87473469/183924889-9e73fcd2-c63a-4582-a03a-d519f0277fec.png)


Input: nums = [1,3]
Output: [3,1]
Explanation: [1,null,3] and [3,1] are both height-balanced BSTs.
