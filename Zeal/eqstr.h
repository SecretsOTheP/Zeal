#pragma once
#include "hook_wrapper.h"
#include "memory.h"

class eqstr
{
public:
	std::unordered_map<int, const char*> str_replacements;
	eqstr(class ZealService* zeal);
	~eqstr();
private:
};
