//
//  LinkedNode.h
//  Lab 4
//
//  Created by Wilson Wu on 6/1/20.
//  Copyright © 2020 None. All rights reserved.
//

#ifndef LinkNode_h
#define LinkNode_h

template <typename T>
class LinkNode
{
public:
    T data;
    LinkNode* next;
    LinkNode():next(nullptr){}
};

#endif /* LinkedNode_h */
