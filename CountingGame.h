#include <iostream>
#include <string>
#include <vector>

using namespace std;

class CountingGame
{
public:
	void StartGame();	
	string CountOff(int originalNum);   
	string int_to_string(int num);  
	bool isTimes(int originalNum,int dividend);
	bool isContain(int originalNum,int specialNum);

	static const string FIZZ;
	static const string BUZZ;
};




