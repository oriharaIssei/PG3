#pragma once

#include <cstdio>

class IFigure{
public:
	IFigure() = default;
	virtual ~IFigure(){}

	virtual void Update() = 0;
};

class Triangle 
	:public IFigure{
public:
	Triangle() = default;
	 ~Triangle(){}

	void Update(){
		printf("A Triangle is a figure\n");
	}
};

class Square
	:public IFigure{
public:
	Square() = default;
	~Square(){}

	void Update(){
		printf("A Square is a figure\n");
	}
};

class Pentagon
	:public IFigure{
public:
	Pentagon() = default;
	~Pentagon(){}

	void Update(){
		printf("A Pentagon is a figure\n");
	}
};

class Circle
	:public IFigure{
public:
	Circle() = default;
	~Circle(){}

	void Update(){
		printf("A Circle is a figure\n");
	}
};