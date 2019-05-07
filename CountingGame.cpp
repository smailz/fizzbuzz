#include <iostream>
#include <sstream>
#include <string>
#include "CountingGame.h"

using namespace std;

const string CountingGame::FIZZ = "Fizz";
const string CountingGame::BUZZ = "Buzz";



//@brief:打印出1~100报数
void CountingGame::StartGame(){
	for(int i = 0; i <= 100; i++)
		cout << CountOff(i) << endl;
}


//@brief:计算报数结果
//@param:原始数字
//@return:返回报数结果
string CountingGame::CountOff(int originalNum){
	

	string result;	
	if(isTimes(originalNum,3) || isContain(originalNum,3))
	{
		result += FIZZ;
	}

	if(isTimes(originalNum,5) || isContain(originalNum,5))
	{
		result += BUZZ;
	}

	return (result.empty() ? int_to_string(originalNum) : result);

}


//@brief:借助字符串流，将int转为string类型
//@param:int类型数字
//@return:返回string类型字符串
string CountingGame::int_to_string(int num){
	
	stringstream ss;
	ss << num;

	return ss.str();
}


//@brief:判断是否倍数
//@param:数字与被除数
//@return:返回是否有倍数关系
bool CountingGame::isTimes(int originalNum,int dividend)
{
	return originalNum % dividend == 0 ? true : false;
}


//@brief:判断是否包含
//@param:数字与被包含的数字
//@return:返回是否有包含关系
bool CountingGame::isContain(int originalNum,int specialNum)
{
	string originalNumStr = int_to_string(originalNum);
	string specialNumStr = int_to_string(specialNum);

	return originalNumStr.find(specialNumStr) != string::npos ? true : false;
}

