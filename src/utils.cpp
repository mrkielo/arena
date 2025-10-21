#include "../h/utils.h"
#include <cstdlib>

void Utils::clear()
{
	#ifdef _WIN32
	  system("cls");
	#endif
	#ifdef linux
	  system("clear");
	#endif
}
