#include <QtTest/QtTest>

class Test_Main : public QObject
{
    Q_OBJECT
private slots:
    // Put testing slots here
    void initTest();

private:
    // Put testing variables here
};

void Test_Main::initTest(){
    QVERIFY(true);
}

//#endif //TEST_DATABASE_H

QTEST_MAIN(Test_Main)
#include "test_main.moc"
