#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Hello
#include <boost/test/included/unit_test.hpp>

float galutinis(int egz, float vid) {
	return (0.6 * egz + 0.4 * vid);
}

float vid(std::vector<int>pazymiai) {
	int dydis = pazymiai.size();
	return accumulate(pazymiai.begin(), pazymiai.end(), 0.000) / dydis;
}


BOOST_AUTO_TEST_CASE(galutinio_balo_testas) {
		float apskaiciuotas = 9.2;
		float skaiciuojamas = galutinis(10, 8);
		BOOST_CHECK(skaiciuojamas == apskaiciuotas);
}

BOOST_AUTO_TEST_CASE(vidurkio_testas) {
	float apskaiciuotas = 6.2; 
	float skaiciuojamas = vid({ 3,7,4,8,9 });
	BOOST_CHECK(skaiciuojamas == apskaiciuotas);

}
