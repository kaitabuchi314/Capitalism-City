#pragma once
#include <iostream>
#include <cstdlib>


#ifndef DIST

#define C_LOG(txt) std::cout << "Capitalism City::Log:: " << txt << std::endl;

#define C_ASSERT(b) if (!b)  { std::cout << "Capitalism City::Error:: " << __FILE__ << " on " << __LINE__ << std::endl; std::exit(-1); }

#else

#define C_LOG(txt)
#define C_ASSERT(b) if (!b)  { std::exit(-1); }

#endif