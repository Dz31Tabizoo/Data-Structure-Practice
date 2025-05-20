#pragma once

#include <iostream>
#include <string>
#include "clsMyStack.h"
#include <stack>

using namespace std;




class clsMyString
{
private:

	string _Text;
	stack <string> _Undo;
	stack <string> _Redo;

public:

	void SetString(string Val)
	{
		_Text = Val;
		_Undo.push(Val);
	}

	string GetString()
	{
		return _Text;
	}
	
	__declspec(property(get = GetString, put = SetString )) string TEXT;

	void Undo()
	{
		if (!_Undo.empty())
		{
			_Redo.push(TEXT);
			TEXT = _Undo.top();
			_Undo.pop();

		}
	}
	void Redo()
	{
		if (!_Redo.empty())
		{
			_Undo.push(TEXT);
			TEXT = _Undo.top();
			_Undo.pop();
		}

	}
	


};

