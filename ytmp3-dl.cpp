// A Cpp code by Mushfiqur Rahman Abir AKA Abir-Tx
// Developer Profile: https://www.github.com/Abir-Tx
#include "include/alib/alib.hpp"
#include <iostream>
#include "include/json/json.h"

#include <fstream>
int main(int argc, char **argv)
{
	/* Json config condes & settings */
	std::string config_file = "config.json";

	std::ifstream config(config_file);
	Json::Value allData;
	config >> allData;

	if (allData.get("enableDecor", false).asBool())
		alib::decorateMe("YTMP3-DL", 1, " ", true);
	if (allData["enableColoredLines"])
		alib::horizontalLine(1, allData.get("lineColor", "white").asString());

	return 0;
}