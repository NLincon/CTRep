#include "cute.h"
#include "ide_listener.h"
#include "xml_listener.h"
#include "cute_runner.h"
#include "Hal.h"

#define N_LOOPS			10

using namespace std;

void thisIsATest() {
	ASSERTM("start writing tests", false);	
}

int prepareSetup();
int checkSetup();
int prepareLoop();
int checkLoop();


void halSetupTest()
{
	int expectedResult = prepareSetup();

	setup();

	int actualResult = checkSetup();

	ASSERT_EQUAL(expectedResult, actualResult);
}

void halLoopTest()
{
	int expectedResult = prepareLoop();

	for(int i = 0; i < N_LOOPS; i++)
	{
		loop();
	}

	int actualResult = checkLoop();

	ASSERT_EQUAL(expectedResult, actualResult);
}

bool runAllTests(int argc, char const *argv[]) {
	cute::suite s { };
	//TODO add your test here
	s.push_back(CUTE(thisIsATest));
	s.push_back(CUTE(halSetupTest));
	s.push_back(CUTE(halLoopTest));
	cute::xml_file_opener xmlfile(argc, argv);
	cute::xml_listener<cute::ide_listener<>> lis(xmlfile.out);
	auto runner = cute::makeRunner(lis, argc, argv);
	bool success = runner(s, "AllTests");
	return success;
}

int main(int argc, char const *argv[]) {
    return runAllTests(argc, argv) ? EXIT_SUCCESS : EXIT_FAILURE;
}

int prepareSetup()
{
	return 0;
}
int checkSetup()
{
	return 0;
}

int prepareLoop()
{
	return 0;
}
int checkLoop()
{
	return 0;
}
