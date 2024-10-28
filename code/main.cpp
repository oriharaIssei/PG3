#include <cstdio>
#include <memory>

#include "Shape.h"

int main(){
	std::unique_ptr<IShape> shape;
	shape = std::make_unique<Rectangle>(10.0f,20.0f);
	shape->Size();
	shape->Draw();

	shape = std::make_unique<Circle>(34.0f);
	shape->Size();
	shape->Draw();
}