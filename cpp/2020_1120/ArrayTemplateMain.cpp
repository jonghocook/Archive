#include <iostream>
#include "ArrayTemplate.h"
#include "Point.h"

int main(void) {
	/*** int�� ���� ���� ***/
	BoundCheckArray<int> iarr(5);
	for (int i = 0; i < 5; i++) iarr[i] = (i + 1) * 11;
	for (int i = 0; i < 5; i++) std::cout << iarr[i] << std::endl;

	/*** Point�� ���� ���� ***/
	BoundCheckArray<Point> oarr(3);
	oarr[0] = Point(3, 4);
	oarr[1] = Point(5, 6);
	oarr[2] = Point(7, 8);
	for (int i = 0; i < oarr.GetArrLen(); i++) std::cout << oarr[i];

	/*** Point ��ü�� �ּҰ� ���� ***/
	typedef Point* POINT_PTR;
	BoundCheckArray<POINT_PTR> parr(3);
	parr[0] = new Point(3, 4);
	parr[1] = new Point(5, 6);
	parr[2] = new Point(7, 8);
	for (int i = 0; i < parr.GetArrLen(); i++) std::cout << *(parr[i]);

	delete parr[0];
	delete parr[1];
	delete parr[2];

	return 0;
}