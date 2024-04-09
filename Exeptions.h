#ifndef EXEPTIONS_H
#define EXEPTIONS_H

#include <exception>
#include <string>
#include <utility>

class Exeptions : public std::exception
{
public:
	Exeptions(std::pair<int, int>);
	~Exeptions(){};
	virtual std::string locatie_fout();
private:
	int a_;
	int b_;
};

#endif
