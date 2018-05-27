//
//  p_129.cpp
//  leetcode
//
//  Created by lambdachen on 2018/5/27.
//  Copyright © 2018年 lambdachen. All rights reserved.
//

#include "p_129.hpp"
#include <iostream>
#include <cmath>
using namespace std;

int P129Solution::sumNumbers(TreeNode *root){
    if(root == NULL){
        return 0;
    }else{
        int sum = 0;
        vector<int> node_depths;
        root2leaf_depths(root, node_depths, 0);
        sum += sumByDepthVector(root->val, node_depths);
        if(root->left != NULL){
            sum += sumNumbers(root->left);
        }
        if(root->right != NULL){
            sum += sumNumbers(root->right);
        }
        return sum;
    }
}

void P129Solution::root2leaf_depths(TreeNode* node, vector<int> &depths, int d){
    if(node->left == NULL && node->right == NULL){
        depths.push_back(d);
        return;
    }else{
        if(node->left != NULL){
            root2leaf_depths(node->left, depths, d+1);
        }
        if(node->right != NULL){
            root2leaf_depths(node->right, depths, d+1);
        }
    }
}

int P129Solution::sumByDepthVector(int val, vector<int> &depths){
    int sum = 0;
    for(auto &d:depths){
        sum += val * powl(10, d);
    }
    return sum;
}

void P129Solution::test(){
    TreeNode *root = new TreeNode(4);
    TreeNode *node1 = new TreeNode(9);
    TreeNode *node2 = new TreeNode(0);
    TreeNode *node3 = new TreeNode(5);
    TreeNode *node4 = new TreeNode(1);
    root->left = node1;
    root->right = node2;
    node1->left = node3;
    node1->right = node4;
    
    P129Solution test = P129Solution();
    cout<<test.sumNumbers(root)<<endl;
}

