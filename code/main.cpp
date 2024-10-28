#include <cstdio>
#include <memory>

#include "Figtures.h"

int main(){
	std::unique_ptr<IFigure> figure;
	figure = std::make_unique<Triangle>();
	figure->Update();

	figure = std::make_unique<Square>();
	figure->Update();
	
	figure = std::make_unique<Pentagon>();
	figure->Update();

	figure = std::make_unique<Circle>();
	figure->Update();

}