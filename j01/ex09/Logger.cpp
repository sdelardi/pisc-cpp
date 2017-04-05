#include "Logger.hpp"

			Logger::Logger(std::string file)
{
	this->_fileName = file;
}

void 		Logger::logToConsole(std::string str)
{
	std::cout << this->makeLogEntry(str);
}

void 		Logger::logToFile(std::string str)
{
	std::ofstream ofs;
	ofs.open(this->_fileName, std::ios_base::app);
	if (ofs.is_open())
	{
		ofs << this->makeLogEntry(str);
		ofs.close();
	}
	else
		std::cerr << "Unable to open file" << std::endl;
}

std::string	Logger::makeLogEntry(std::string str)
{
	std::string log;
	time_t t = time(0);
	struct tm *now = localtime(&t);
	log = "[";
	log += std::to_string(now->tm_year + 1900);
	log += "-";
	log += std::to_string(now->tm_mon + 1);
	log += "-";
	log += std::to_string(now->tm_mday);
	log += " ";
	log += std::to_string(now->tm_hour);
	log += ":";
	log += std::to_string(now->tm_min);
	log += ":";
	log += std::to_string(now->tm_sec);
	log += "]: ";
	log += str;
	log += "\n";
	return log;
}

void		Logger::log(std::string const & dest, std::string const & message)
{
	std::string arr[] = {"console", "file"};
	void (Logger::*f[])(std::string str) = {&Logger::logToConsole, &Logger::logToFile};
	for (int i = 0; i < 2; i++)
	{
		if (dest.compare(arr[i]) == 0)
			(this->*(f[i]))(message);
	}
}
