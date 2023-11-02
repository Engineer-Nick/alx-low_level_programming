#include "main.h"
/**
  * _isupper -This  function checks for uppercase character
  * 
  * @C: the char to be checked
  * 
  * Returns: 1 for uppercase, else 0.
  */

int  _isupper(int C)
{
		if (C >= 65 && C <= 90)
	{
		return (1);
	}
		else
	{
		return (0);
	}
}
