#pragma once

#include <cstdio>

#include <numbers>


class IShape{
public:
	IShape() = default;
	virtual ~IShape(){}

	virtual void Size() = 0;
	virtual void Draw() = 0;
protected:
	float size_;
};

class Rectangle
	:public IShape{
public:
	Rectangle(float width,float height):width_(width),height_(height){}
	~Rectangle(){}

	void Size()override{ size_ = width_ * height_; }
	void Draw()override{ printf("Rectangle : \nwidth = %f : height = %f \n size = %f\n",width_,height_,size_); }
private:
	float width_;
	float height_;
public:
	void SetWidth(float width){ width_ = width; }
	void SetHeight(float height){ height_ = height; }
};

class Circle
	:public IShape{
public:
	Circle(float radius):radius_(radius){}
	~Circle(){}

	void Size()override{
		size_ = std::numbers::pi_v<float> *radius_ * radius_;
	}
	void Draw()override{ printf("Circle : \n radius = %f \n size = %f\n",radius_,size_); }
private:
	float radius_;
public:
	void SetRadius(float radius){ radius_ = radius; }
};