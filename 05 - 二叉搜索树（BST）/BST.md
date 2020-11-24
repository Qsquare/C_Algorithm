# 二叉搜索树

```
“二叉搜索树（BST，Binary Search Tree）”也称二叉排序树或二叉查找树，它是一种对排序和查找都很有用的特殊二叉树。
【定义】一个二叉搜索树是一棵二叉树，它可以为空。如果不为空，它将满足以下性质：
非空左子树的所有键值小于其根结点的键值。
非空右子树的所有键值大于其根结点的键值。
左、右子树都是二叉搜索树。
```

```
Position Find( ElementType X, BinTree BST )：从二叉搜索树BST中查找元素X，返回其所在结点的地址
Position FindMin( BinTree BST )：从二叉搜索树BST中查找并返回最小元素所在结点的地址
Position FindMax( BinTree BST ) ：从二叉搜索树BST中查找并返回最大元素所在结点的地址
 
 
BinTree  Insert( ElementType X, BinTree BST ) 
BinTree  Delete( ElementType X, BinTree BST ) 
```

