#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"
#include "rectangle.hpp"
// tests for exercise 1

TEST_CASE("Ex1 ", "[Test 1]")
{
	Rect r1, r2;
	Square s;

	r1.setHeight(10);
	r1.setWidth(20);
	cout << "Area of r1 " << r1.getArea() << endl;

	s.setWidth(100);
	r2 = r2.makeRectanglewithSquare(s);
	cout << "Area of r2 " << r2.getArea() << endl;

	REQUIRE(r2.getWidth() == 100);
	REQUIRE(r2.getHeight() == 100);
}
