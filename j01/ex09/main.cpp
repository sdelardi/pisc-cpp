#include "Logger.hpp"

int main(void)
{
	Logger log("toto.txt");
	log.log("console", "Ceci est un log de test");
	log.log("file", "Ceci est un log de test");
}
