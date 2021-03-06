//5:27 PM 11/19/2018
/**
* Copyright (c) 2018, SOW (https://www.safeonline.world). (https://github.com/RKTUXYN) All rights reserved.
* @author {SOW}
* Copyrights licensed under the New BSD License.
* See the accompanying LICENSE file for terms.
*/
#if defined(_MSC_VER)
#pragma once
#endif//!_MSC_VER
#if !defined(_npgsql_global_h)
#	define _npgsql_global_h
#	define SUCCESS 1
#	include <iostream>
#	include <stdio.h>
#	include <list>
#	include <map>
#	include <stdlib.h>
#	include <regex>
#	include <cstdlib>
#	include <vector>
#if !defined(NPGSQL_EXPORTS)
#	define NPGSQL_EXPORTS
#endif//!NPGSQL_EXPORTS
#ifdef NPGSQL_EXPORTS
#	define NPGSQL_API __declspec(dllexport)
#else
#	define NPGSQL_API __declspec(dllimport)
#endif//!NPGSQL_EXPORTS
#endif//!_npgsql_global_h

