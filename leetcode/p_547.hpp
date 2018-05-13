//
//  p_547.hpp
//  leetcode
//
//  Created by lambdachen on 2018/5/13.
//  Copyright © 2018年 lambdachen. All rights reserved.
//

#ifndef p_547_hpp
#define p_547_hpp

#include <stdio.h>
#include <vector>

using namespace std;
class P547Solution{
public:
    int findCircleNum(vector<vector<int>>& M);
    void color_friends(vector<vector<int>>& M, int me, int color, vector<int> &colors);
    static void test();
};

#endif /* p_547_hpp */

