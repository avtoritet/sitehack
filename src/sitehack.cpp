// sitehack.cpp : Hacks hosts file to block a site.
#include "stdafx.h"
#include <fstream>

int main() {
	std::ofstream outfile;

	outfile.open("C:\\Windows\\System32\\drivers\\etc\\hosts", std::ios_base::app);
	outfile << "\n127.0.0.2 www.google.com";
	return 0;
}
