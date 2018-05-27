//
//  p_129.hpp
//  leetcode
//
//  Created by lambdachen on 2018/5/27.
//  Copyright © 2018年 lambdachen. All rights reserved.
//

#ifndef p_129_hpp
#define p_129_hpp

#include <stdio.h>
#include <vector>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};

class P129Solution{
public:
    int sumNumbers(TreeNode* root);
    void root2leaf_depths(TreeNode* node, vector<int> &depths, int d);
    int sumByDepthVector(int val, vector<int> &depths);
    void test();
};

#endif /* p_129_hpp */
