#ifndef FUNCTION
#define FUNCTION
#include <typeinfo>
#include <iostream>
#include <vector>
#include "functionTypes.h"

using namespace std;




class function
{
public:
	function();
	function(int size);
	function(int functionType, int size);
	function(long double transition);
	function(double transition);
	function(float transition);
	function(int functionType, long double transition);
	function(int functionType, double transition);
	function(int functionType, float transition);
	long double activation(long double inputs[]);
	double activation(double inputs[]);
	float activation(float inputs[]);
	long int activation(long int inputs[]);
	int activation(int inputs[]);
	short int activation(short inputs[]);
	void changeType(int functionType);
	int getType();
	void changeTransition(long double Transition);
	long double getTransition();
	void setSize(int size);
	int getSize();
    ~function();
private:
	bool ready = false;
	vector<long double> weights;
	vector<long double> inputs;
	long double output;
	long double transition = 0.35;
	int type = hardLimit;
	bool ready = false;
	int size;
	void printNotReady();
};

#endif //FUNCTION