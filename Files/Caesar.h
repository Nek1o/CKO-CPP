#pragma once
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

class Caesar {
private:
	// Секретный ключ
	int key;
	// Метод, позволяющий прочитать сообщение из файла
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
	// Метод, позволяющий записать сообщение в файл
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
		// Правильно кодирует сообщение
		// Не кодирует пробелы и переходы на другую строку
		// Сохраняет результат в файл с путем outputPath
		// Возвращает зашифрованную строку
	
	}

	string decode(string inputPath, string outputPath) {
		// Расшифровывает сообщение,
		// содержащееся в файле inputPath,
		// записывает его в файл outputPath
		// и возвращает расшифрованное сообщение
		
	}
};