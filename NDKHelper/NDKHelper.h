//
//  NDKHelper.h
//  EasyNDK-for-cocos2dx
//
//  Created by Amir Ali Jiwani on 23/02/2013.
//  updated by muhammad shauket on 1/08/2015
//

#ifndef __EasyNDK_for_cocos2dx__NDKHelper__
#define __EasyNDK_for_cocos2dx__NDKHelper__

#include <iostream>
#include "cocos2d.h"
#include <string>
#include <vector>
#include "jansson.h"
#include "NDKCallbackNode.h"
USING_NS_CC;
using namespace std;

class NDKHelper
{
    private :
        static std::vector<NDKCallbackNode> selectorList;
        //static CCDictionary* GetDict(json_t *dictionary);
        static void RemoveAtIndex(int index);
        static const char* TargetGroupName;

    public :
        static void AddSelector(const char *groupName, const char *name, SEL_CallFuncND selector, Node* target);
        static void RemoveSelectorsInGroup();
        static void PrintSelectorList();
        static Ref* GetCCObjectFromJson(json_t *obj);
        static json_t* GetJsonFromCCObject(Ref* obj);
        static void HandleMessage(json_t *methodName, json_t* methodParams);
};

extern "C"
{
    void SendMessageWithParams(string methodName, Ref* methodParams);
}

#endif /* defined(__EasyNDK_for_cocos2dx__NDKHelper__) */
