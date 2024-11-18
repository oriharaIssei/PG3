#include <cstdio>

#include <list>

int main(){
	std::list<const char*> yamanoteLoopLineBy1970_;
	yamanoteLoopLineBy1970_.push_back("Tokyo");
	yamanoteLoopLineBy1970_.push_back("Kanda");
	yamanoteLoopLineBy1970_.push_back("Akihabara");
	yamanoteLoopLineBy1970_.push_back("Okachimachi");
	yamanoteLoopLineBy1970_.push_back("Ueno");
	yamanoteLoopLineBy1970_.push_back("Uguisudani");
	yamanoteLoopLineBy1970_.push_back("Nippori");
	yamanoteLoopLineBy1970_.push_back("Nishi-Nippori");
	yamanoteLoopLineBy1970_.push_back("Tabata");
	yamanoteLoopLineBy1970_.push_back("Komagome");
	yamanoteLoopLineBy1970_.push_back("Sugamo");
	yamanoteLoopLineBy1970_.push_back("Otsuka");
	yamanoteLoopLineBy1970_.push_back("Ikebukuro");
	yamanoteLoopLineBy1970_.push_back("Mejiro");
	yamanoteLoopLineBy1970_.push_back("Takadanobaba");
	yamanoteLoopLineBy1970_.push_back("Shin-Okubo");
	yamanoteLoopLineBy1970_.push_back("Shinjuku");
	yamanoteLoopLineBy1970_.push_back("Yoyogi");
	yamanoteLoopLineBy1970_.push_back("Harajuku");
	yamanoteLoopLineBy1970_.push_back("Sibhuya");
	yamanoteLoopLineBy1970_.push_back("Ebisu");
	yamanoteLoopLineBy1970_.push_back("Meguro");
	yamanoteLoopLineBy1970_.push_back("Gotanda");
	yamanoteLoopLineBy1970_.push_back("Osaki");
	yamanoteLoopLineBy1970_.push_back("Sinagawa");
	yamanoteLoopLineBy1970_.push_back("Tamachi");
	yamanoteLoopLineBy1970_.push_back("Hamamatsucho");
	yamanoteLoopLineBy1970_.push_back("Shimbasi");
	yamanoteLoopLineBy1970_.push_back("Yurakucho");

	std::list<const char*> yamanoteLoopLineBy2019_;
	yamanoteLoopLineBy2019_.push_back("Tokyo");
	yamanoteLoopLineBy2019_.push_back("Kanda");
	yamanoteLoopLineBy2019_.push_back("Akihabara");
	yamanoteLoopLineBy2019_.push_back("Okatimachi");
	yamanoteLoopLineBy2019_.push_back("Ueno");
	yamanoteLoopLineBy2019_.push_back("Uguisudani");
	yamanoteLoopLineBy2019_.push_back("Nippori");
	yamanoteLoopLineBy2019_.push_back("Nisi-Nippori");
	yamanoteLoopLineBy2019_.push_back("Tabata");
	yamanoteLoopLineBy2019_.push_back("Komagome");
	yamanoteLoopLineBy2019_.push_back("Subamo");
	yamanoteLoopLineBy2019_.push_back("Otsuka");
	yamanoteLoopLineBy2019_.push_back("Ikebukuro");
	yamanoteLoopLineBy2019_.push_back("Mejiro");
	yamanoteLoopLineBy2019_.push_back("Takadanobaba");
	yamanoteLoopLineBy2019_.push_back("Shin-Okubo");
	yamanoteLoopLineBy2019_.push_back("Shinjuku");
	yamanoteLoopLineBy2019_.push_back("Yoyogi");
	yamanoteLoopLineBy2019_.push_back("Harajuku");
	yamanoteLoopLineBy2019_.push_back("Shibuya");
	yamanoteLoopLineBy2019_.push_back("Ebisu");
	yamanoteLoopLineBy2019_.push_back("Gotanda");
	yamanoteLoopLineBy2019_.push_back("Osaki");
	yamanoteLoopLineBy2019_.push_back("Sinagawa");
	yamanoteLoopLineBy2019_.push_back("Tamachi");
	yamanoteLoopLineBy2019_.push_back("Hamamatsucho");
	yamanoteLoopLineBy2019_.push_back("Shinbasi");
	yamanoteLoopLineBy2019_.push_back("Yurakucho");

	std::list<const char*> yamanoteLoopLineBy2022_;
	yamanoteLoopLineBy2022_.push_back("Tokyo");
	yamanoteLoopLineBy2022_.push_back("Kanda");
	yamanoteLoopLineBy2022_.push_back("Akihabara");
	yamanoteLoopLineBy2022_.push_back("Okachimachi");
	yamanoteLoopLineBy2022_.push_back("Ueno");
	yamanoteLoopLineBy2022_.push_back("Uguisudani");
	yamanoteLoopLineBy2022_.push_back("Nippori");
	yamanoteLoopLineBy2022_.push_back("Nishi-Nippori");
	yamanoteLoopLineBy2022_.push_back("Tabata");
	yamanoteLoopLineBy2022_.push_back("Komagome");
	yamanoteLoopLineBy2022_.push_back("Sugamo");
	yamanoteLoopLineBy2022_.push_back("Otsuka");
	yamanoteLoopLineBy2022_.push_back("Ikebukuro");
	yamanoteLoopLineBy2022_.push_back("Mejiro");
	yamanoteLoopLineBy2022_.push_back("Takadanobaba");
	yamanoteLoopLineBy2022_.push_back("Shin-Okubo");
	yamanoteLoopLineBy2022_.push_back("Shinjuku");
	yamanoteLoopLineBy2022_.push_back("Yoyogi");
	yamanoteLoopLineBy2022_.push_back("Harajuku");
	yamanoteLoopLineBy2022_.push_back("Sibhuya");
	yamanoteLoopLineBy2022_.push_back("Ebisu");
	yamanoteLoopLineBy2022_.push_back("Meguro");
	yamanoteLoopLineBy2022_.push_back("Gotanda");
	yamanoteLoopLineBy2022_.push_back("Osaki");
	yamanoteLoopLineBy2022_.push_back("Sinagawa");
	yamanoteLoopLineBy2022_.push_back("Takanawa Gateway");
	yamanoteLoopLineBy2022_.push_back("Tamachi");
	yamanoteLoopLineBy2022_.push_back("Hamamatsucho");
	yamanoteLoopLineBy2022_.push_back("Shimbasi");
	yamanoteLoopLineBy2022_.push_back("Yurakucho");

	printf("yamanoteLoopLineBy1970\n");
	for(auto itr = yamanoteLoopLineBy1970_.begin(); itr != yamanoteLoopLineBy1970_.end(); ++itr){
		printf("%s\n",*itr);
	}
	printf("\nyamanoteLoopLineBy2019\n");
	for(auto itr = yamanoteLoopLineBy2019_.begin(); itr != yamanoteLoopLineBy2019_.end(); ++itr){
		printf("%s\n",*itr);
	}
	printf("\nyamanoteLoopLineBy2022\n");
	for(auto itr = yamanoteLoopLineBy2022_.begin(); itr != yamanoteLoopLineBy2022_.end(); ++itr){
		printf("%s\n",*itr);
	}
}