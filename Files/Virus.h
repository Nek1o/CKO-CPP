#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <time.h>

using namespace std;

class Virus {
private:
	int depth;
	int width;
	int size;


	void makeFile(string path, int size) {
		ofstream out(path);
		for (size_t i = 0; i < size; i++) {
			out << (char)(97 + rand() % 26);
		}
	}
public:
	Virus(int depth, int width, int size) {

	}

	void infestWithFiles(string path, int currentDepth) {
		
	}

	void infestWithDirectories(string path, int currentDepth) {
		
	}

};




