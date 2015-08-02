# EasyNDK-updated-version-for-cocos2dx-3.4

Original project link: https://github.com/aajiwani/EasyNDK-for-cocos2dx

This is an update to the EasyNDK project created by Amir Ali Jiwani.Fixed vector remove selector issue and fixed crash if name of two selector are same in different class with different group name.
Cocos2d-x v3.4 introduced new classes such as cocos2d::Value and
containers such as cocos2d::Map<> and cocos2d::Vector<>. However, v3.4
also deprecated most of the classes that the original EasyNDK source
relied upon. This repo updates EasyNDK to work with these changes.

If you're curious about how the system works, please see the original
project page.

The sample Cocos2d-x project included in this repo will illustrate how
to set up the directories and get communication between your game and
the native Java/Obj-C environment up and running quickly. The included
jansson library has been modified to successfully build with Android.
