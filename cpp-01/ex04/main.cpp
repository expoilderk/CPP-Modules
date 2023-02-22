#include <iostream>
#include <fstream>
#include <string>

std::string replaceLine(std::string line, std::string s1, std::string s2)
{	
	std::string newline;
	size_t pos = line.find(s1);
	size_t lastpos = 0;

	while (pos != std::string::npos)
	{
		newline += line.substr(lastpos, pos - lastpos);
		newline += s2;
		lastpos = pos + s1.length();
		pos = line.find(s1, lastpos);
	}
	newline += line.substr(lastpos);
	return newline;
}

int main(int argc, char **argv)
{
	std::string input[4];
	std::string line;
	std::string newfile;
	std::ifstream fin(argv[1]);
	
	if (argc != 4) {
		std::cout << "Invalid number of arguments!" << std::endl;
		return 0;
	}
	else
		for (int i = 0; i < 4; i++)
			input[i] = argv[i];

	if (!fin) {
		std::cout << "File Error!" << std::endl;
		return 1;
	}
	else if (!fin.good()) {
		std::cout << "File not found!" << std::endl;
		return 1;
	}

	newfile = input[1] + ".replace";
	std::ofstream fout(newfile.c_str());
	while (std::getline(fin, line))
		fout << replaceLine(line, input[2], input[3]) << std::endl;

	fout.close();
	fin.close();

	return 0;
}
