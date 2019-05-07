#include <iostream>
#include "CountingGame.h"
#include "gtest/gtest.h"


#ifdef UNIT_TEST
/*================== 测试版本编译 ======================*/
int main(int argc, char **argv){
	::testing::InitGoogleTest( &argc, argv);
    return RUN_ALL_TESTS();
	
}

#else
/*================== 正常版本编译 ======================*/
int main(int argc, char **argv){
	CountingGame task;
	task.StartGame();
}
#endif