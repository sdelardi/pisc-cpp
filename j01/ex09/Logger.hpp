#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <fstream>
#include <ctime>

class Logger
{
	public:
		Logger(std::string file);
		void log(std::string const & dest, std::string const & message);

	private:
		void logToConsole(std::string str);
		void logToFile(std::string);
		std::string makeLogEntry(std::string str);
		std::string _fileName;
};

#endif
