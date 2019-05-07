#include <iostream>
#include <map>
#include "CountingGame.h"

#include "gtest/gtest.h"

class TestCountingGame : public testing::Test{
public:
	void SetUp(){};
	void TearDown(){};
	
protected:
	CountingGame mTask;

};

TEST_F(TestCountingGame, testCountOff){

	//构造测试用例     int string -- 原始数字，预期报数结果
	map<int,string> testCase;
	testCase[3] = CountingGame::FIZZ;
	testCase[5] = CountingGame::BUZZ;
	testCase[13] = CountingGame::FIZZ;
	testCase[58] = CountingGame::BUZZ;
	testCase[9] =  CountingGame::FIZZ;
	testCase[10] = CountingGame::BUZZ;
	testCase[51] = CountingGame::FIZZ +CountingGame::BUZZ;
	testCase[15] = CountingGame::FIZZ +CountingGame::BUZZ;
	testCase[53] = CountingGame::FIZZ +CountingGame::BUZZ;


	//批量验证每个测试用例执行结果是否符合预期
	for(map<int,string>::iterator iter = testCase.begin(); iter != testCase.end(); iter++)
	{
		//运行被测接口
		string res = mTask.CountOff(iter->first);

		
		//断言 执行CoutOff方法后返回的结果res应等于测试用例的预期结果
		EXPECT_EQ(iter->second, res) << " 断言失败：当前输入原始数字为：" << iter->first;
	}
	 
	

	

	
}


