#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS

#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>
#include "mycalc.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

	_declspec(dllexport) int int_add(int a, int b)
	{
		return a + b;
	}
	_declspec(dllexport) int int_multi(int a, int b)
	{
		return a * b;
	}

#ifdef __cplusplus
}
#endif // __cplusplus
