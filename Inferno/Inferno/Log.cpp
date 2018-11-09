#include "pch.h"
#include "Log.h"
#include <fstream>
#include <iostream>


void Log::Write(std::string msg)
{
	std::ofstream myFile("log.log", std::ios_base::app | std::ios_base::out);
	if (myFile.is_open())
	{
		//msg += "\r \n";
		myFile << msg << "line\n";
		myFile.close();
	}
	else
		std::cout << "Unable to open file" << std::endl;
}
