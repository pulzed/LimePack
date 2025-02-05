/*
 * Copyright (c) 2024 Danijel Durakovic
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is furnished to do
 * so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

 /*
  *  LimePack Demo
  *
  *  main.cpp
  *  Program entry point.
  *
  */

#include "demo.h"
#include <exception>
#if defined(_WIN32)
	#include <Windows.h>
#else
	#include <iostream>
#endif

#if defined(_WIN32)
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR nCmdLine, int nCmdShow)
#else
int main(int argc, char* args[])
#endif
{
	Demo demo;
	try {
		demo.Init();
		demo.Run();
	}
	catch (std::exception& e) {
#if defined(_WIN32)
		MessageBoxA(NULL, e.what(), "LimePack Demo", MB_ICONERROR | MB_OK);
#else
		std::cout
			<< std::endl
			<< e.what()
			<< std::endl
			<< std::endl;
#endif
	}
	return 0;
}