#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

const std::string fileName = "PG3_2024_03_02.txt";
std::vector<std::string> LoadText(const std::string& _fileName = fileName);

int main(){
	std::vector<std::string> studentIds = LoadText(fileName);

	std::cout << "Sort Before" << std::endl;
	for(auto& studentId : studentIds){
		std::cout << studentId << std::endl;
	}

	std::sort(studentIds.begin(),studentIds.end());

	std::cout << "Sort After" << std::endl;
	for(auto& studentId : studentIds){
		std::cout << studentId << std::endl;
	}

	return 0;
}

std::vector<std::string> LoadText(const std::string& _fileName){
	std::ifstream file(_fileName);

	std::vector<std::string> result;

	if(!file.is_open()){
		std::cerr << "ファイルを開けませんでした。" << std::endl;
		return result;
	}

	std::string line;
	std::string token;
	bool insideQuotes = false;
	while(std::getline(file,line)){
		for(char c : line){
			if(c == '"'){
				if(insideQuotes){
					// 追加
					result.push_back(token);
					// 初期化
					token = "";
					insideQuotes = false;
				}
				insideQuotes = true;
			} else if(c == ','){
				insideQuotes = false;
			} else if(insideQuotes){
				// "の中の文字をコピー
				token += c;
			}
		}
	}

	file.close();

	return result;
}