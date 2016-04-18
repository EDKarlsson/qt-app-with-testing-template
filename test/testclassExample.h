#ifndef TESTCLASS_H
#define TESTCLASS_H

#include "TestRunner.h"
#include <QObject>

class TestingSuiteOne : public QObject
{
 Q_OBJECT
private slots:
    /*** GENERAL TEST SETUP AND TEARDOWN - Comment out if not defined ***/
    // Called before the first test function is executed. If this fails no tests are run
    void initTestCase() { qDebug("initTestCase() is called before each test class!"); }
    // Called after the last test function was executed.
    void cleanupTestCase() { qDebug("cleanupTestCase() runs after all tests in this class are done!"); }

    /*** PER-TEST SETUP AND TEARDOWN  - Comment out if not defined ***/
    // Called before every test, if it fails then the NEXT test does not run
    void init() { qDebug("init() is called before every function!"); }
    // Called after every test function finishes
    void cleanup() { qDebug("cleanup() runs after every test!"); }

    /*** TESTS FOR THE CLASS ***/
    void testingTest() { qDebug("*** RUNNING THE ACTUAL TEST ***"); QVERIFY(true); }

};

/*** Uncomment this line in a real test class to add to list of tests ***/
//DECLARE_TEST(TestingSuiteOne)

#endif // TESTCLASS_H
