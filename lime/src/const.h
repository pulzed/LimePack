/*
 * Copyright (c) 2019 Danijel Durakovic
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
  *  Lime
  *
  *  Utility for Lime datafile creation.
  *
  *  const.h
  *  Various constants.
  *
  */

#pragma once

#ifndef LIME_CONST_H_
#define LIME_CONST_H_

#include <string>
#include <cstdint>

namespace Lime
{
	const std::string LIME_VERSION = "1.0.1";
	const std::string LIME_COPYRIGHT_YEAR = "2023";
	const std::string LIME_COPYRIGHT_AUTHOR = "Danijel Durakovic";

	// format revision number
	const uint8_t LIME_REVISION = 1;

	// bgn/end endpoints
	const std::string LM_BGN_ADLER32 = "L>";
	const std::string LM_END_ADLER32 = "<M";
	const std::string LM_BGN_CRC32 = "L]";
	const std::string LM_END_CRC32 = "[M";
	const std::string LM_BGN_NOCHKSUM = "L)";
	const std::string LM_END_NOCHKSUM = "(M";
}

#endif // LIME_CONST_H_