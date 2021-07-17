#if !defined(DOWNLOADER_HPP)
#define DOWNLOADER_HPP
#include <iostream>

class Downloader
{
public:
	std::string downloadUrl, downloaderProgram;

public: /* Public methods for downloading stuffs */
	Downloader(std::string url, std::string downProg);
	int quickDownload();
};

#endif // DOWNLOADER_HPP