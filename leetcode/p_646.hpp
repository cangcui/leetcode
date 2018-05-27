//
//  p_646.hpp
//  leetcode
//
//  Created by lambdachen on 2018/5/26.
//  Copyright © 2018年 lambdachen. All rights reserved.
//

#ifndef p_646_hpp
#define p_646_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class P646Solution{
public:
    int findLongestChain(vector<vector<int> > &pairs);
    void test();
    bool vector_smaller(vector<int> &a, vector<int> &b);
};

#endif /* p_646_hpp */
