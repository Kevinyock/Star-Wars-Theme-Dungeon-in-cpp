#pragma once
#include <string>
class Force
{
private:

public:
	const std::string FORCE_MENU = "1. Force Push\n2. Force Choke\n3. Force Slam";
	virtual int ForcePush();
	virtual int ForceChoke();
	virtual int ForceSlam();
};

