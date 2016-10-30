#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE myTest
#include <boost/test/unit_test.hpp>
#include "myClass.hpp"

BOOST_AUTO_TEST_SUITE(testy_hierarchii_klas_A_i_B)
BOOST_AUTO_TEST_CASE(testKlasyA){ //test klasy A
	A objA(10);
	objA.setX(15);
	BOOST_CHECK(objA.getX()==15);	 //pierwsza jednostka testowa - OK

	if(objA.getX()!=10){ 		 //druga jednostka testowa - BLAD (warunek 'if' celowo aby wymusic blad)
		BOOST_FAIL("It looks like function 'getX()' from class 'A' doesnt work properly..");
	}
} //koniec testow klasy A

BOOST_AUTO_TEST_CASE(testKlasyB){ //test klasy B
	B objB(100,200);
	BOOST_REQUIRE(objB.getX()==100); //pierwsza jednostka testowa - OK

	objB.setY(300);
	if(objB.getY()!=200){ 		 //druga jednostka testowa - BLAD (warunek 'if' celowo..)
		BOOST_ERROR("It looks like function 'getY()' from class 'B' doesnt work properly..");
	}
}
BOOST_AUTO_TEST_SUITE_END()
