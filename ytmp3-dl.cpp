// A Cpp code by Mushfiqur Rahman Abir AKA Abir-Tx
// Developer Profile: https://www.github.com/Abir-Tx
#include "include/alib/alib.hpp"
#include <iostream>
#include "include/json/json.h"
#include "include/ytmp3-dl/downloader.hpp"

#include <fstream>
#include <thread>
int main(int argc, char **argv)
{
	/* Json config condes & settings */
	std::string config_file = "config.json";

	std::ifstream config(config_file);
	Json::Value allData;
	config >> allData;

	/* Startup Decoration struff */
	if (allData.get("enableDecor", false).asBool())
		alib::decorateMe("YTMP3-DL", 1, " ", true);
	if (allData.get("enableColoredLines", false).asBool())
		alib::horizontalLine(1, allData.get("lineColor", "white").asString());

	std::cout << "Enter download URL: ";
	std::string downUrl;
	std::cin >> downUrl;
	std::cout << std::endl;

	Downloader dl(downUrl, allData.get("downloader", "youtube-dl").asString());
	dl.quickDownload();

	return 0;
}