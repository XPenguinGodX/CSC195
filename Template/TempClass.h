#pragma once

template<typename T = int>
class TempClass
{
private:
	T x, y;
public:
	TempClass() : x{ 0 }, y{ 0 } {}
	TempClass(T x, T y) : x{ x }, y{ y } {}
};


template<typename T>
class TempArray
{
private:
	T m_elements[10];

public:

	T operator [] (int index) { return m_elements[index]; }

};
