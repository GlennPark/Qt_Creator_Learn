#include <QtTest>
#include <QCoreApplication>
#include <QtWidgets>
// add necessary includes here

class GuiTest : public QObject
{
    Q_OBJECT

public:
    GuiTest();
    ~GuiTest();

private slots:
    void test_case1();

};

GuiTest::GuiTest()
{

}

GuiTest::~GuiTest()
{

}

void GuiTest::test_case1()
{
    QLineEdit lineEdit;
    QTest::keyClicks(&lineEdit,"hi KDE");
    QCOMPARE(lineEdit.text(), "hi KDE");
    QVERIFY2(true, "Failure");
}

QTEST_MAIN(GuiTest)

#include "tst_guitest.moc"
