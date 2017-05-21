// tinytrace.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "tt.h"

int test1();
int test2();

int main()
{
	global++;
	test1();
	test2();
	return 0;
}

