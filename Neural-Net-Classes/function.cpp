#include "function.h"

function::function()
{

}

function::function(int size)
{
	setSize(size);
}

function::function(int functionType, int size)
{
	changeType(functionType);
	setSize(size);
}

function::function(long double transition)
{
	
}

function::function(double transition)
{

}

function::function(float transition)
{

}

function::function(int functionType, long double transition)
{

}

function::function(int functionType, double transition)
{

}

function::function(int functionType, float transition)
{

}

long double function::activation(long double inputs[])
{
	if (ready)
	{
		long double sum = 0, input;
		for (int i = 0; i < this->inputs.size; i++)
		{
			this->inputs.pop_back();
		}
		for (int i = 0; i < size; i++)
		{
			sum += inputs[i];
			this->inputs.push_back(inputs[i]);
		}

		input = sum * transition;
		if (type == sigmoid)
		{
			
			output = 1 / (1 + exp(-input));
		}
		else if (type == tanh)
		{
			output = tanhl(input);
		}
		else if (type == hardLimit)
		{
			output = input > 0 ? 1 : 0;
		}
		else if (type == sHardLimit)
		{
			output = input > 0 ? 1 : -1;
		}
		else if (type == softsign)
		{
			output = 1 / (1 + abs(input));
		}
		else if (type == relu)
		{
			output = input > 0 ? input : 0;
		}

	}
	else
	{
		printNotReady();
	}
}

double function::activation(double inputs[])
{

}

float function::activation(float inputs[])
{

}

long int function::activation(long int inputs[])
{

}

int function::activation(int inputs[])
{

}

short int function::activation(short inputs[])
{

}


void function::changeType(int functionType)
{
	if (ready)
	{
		if (functionType >= 0 && functionType <= 4)
		{
			type = functionType;
		}
		else
		{
			cout << "invalid function type" << endl;
		}
	}
	else
	{
		printNotReady();
	}
}

int function::getType()
{
	if (ready)
		return type;
	else
		printNotReady();
}

void function::changeTransition(long double Transition)
{
	if (ready)
		transition = Transition;
	else
		printNotReady();
}

long double function::getTransition()
{
	if (ready)
	{
		if (ready)
			return transition;

		else
			cout << "size of input is unspecified" << endl;
	}
	else
	{
		printNotReady();
	}
}


void function::setSize(int Size)
{
	if (Size > 0)
	{
		size = Size;
		ready = true;
	}
	else
	{
		printNotReady();
	}
}

int function::getSize()
{
	return size;
}

void function::printNotReady()
{
	cout << "size of input cannot be negative or zero" << endl;
}
function::~function()
{

}