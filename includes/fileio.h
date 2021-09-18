#ifndef FILEIO_H_
#define FILEIO_H_
#include <iostream>
#include <string>
#include <vector>

int load(const std::string filename, std::vector<process> &myProcess);


int save(const std::string filename, std::vector<process> &myProcesses);

#endif /* FILEIO_H_ */
