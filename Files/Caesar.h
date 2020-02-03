#pragma once
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

class Caesar {
private:
	int key;

	string readFromFile(string inputPath) {
		string result = "";
		ifstream in;
		in.open(inputPath);
		if (in.is_open()) {
			while (!in.eof()) {
				string temp;
				in >> temp;
				result += temp + " ";
			}
		}
		in.close();
		return result;
	}

	void writeToFile(string outputPath, string message) {
		ofstream out;
		out.open(outputPath);
		out << message;
		out.close();
	}

public:
	Caesar(int key) {
		this->key = key;
	}

	string encode(string inputPath, string outputPath) {

	
	}

	string decode(string inputPath, string outputPath) {

		
	}
};