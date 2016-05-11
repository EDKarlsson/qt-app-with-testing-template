#ifndef TESTRUNNER_H
#define TESTRUNNER_H

// Qt includes
#include <QTest>
#include <QSharedPointer>
// std includes
#include <algorithm>
#include <list>
#include <iostream>

/**
 * Test Runner allows automatic execution of tests
 */
class TestRunner
{
public:

static TestRunner& Instance()
{
   static TestRunner instance;
   return instance;
}

void RegisterTest(QObject* test)
{
   auto testName = test->objectName();

   if ( std::find_if(begin(m_tests), end(m_tests), [&testName](QSharedPointer<QObject>& elem)
        { return elem->objectName() == testName; }) == end(m_tests) )
       m_tests.push_back(QSharedPointer<QObject>(test));
}

int RunAll(int argc, char *argv[])
{
   int errorCode = 0;
   std::for_each( m_tests.begin(), m_tests.end(), [&] (QSharedPointer<QObject>& test)
   {
      errorCode |= QTest::qExec(test.data(), argc, argv);
      std::cout << std::endl;
   } );

   return errorCode;
}

private:
   std::list< QSharedPointer<QObject> > m_tests;
};

/**
 *
 */
template <class T>
class TestAdder
{
public:

 TestAdder(const QString& name)
 {
   auto newTest = new T();
   newTest->setObjectName(name);
   TestRunner::Instance().RegisterTest(newTest);
 }



};

// Use this macro after your test declaration
#define DECLARE_TEST(className) static TestAdder<className> t_##className(#className);

// Use this macro to execute all tests
#define RUN_ALL_TESTS(argc, argv) TestRunner::Instance().RunAll(argc, argv);

#endif // TESTRUNNER_H
