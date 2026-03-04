#include "newtest.h"
#include <QtTest/QtTest>
#include <QTest>
#include "newclass.h"

newtest::newtest(QObject *parent)  
    : QObject{parent}
{}

void newtest::testsynonm_data() // jdjmfvfv
{
    QTest::addColumn<QList<QStringList>>("Dictionary");
    QTest::addColumn<QString>("llalal");
    QTest::addColumn<QString>("synonym");

    QTest::newRow("test1")<<QList<QStringList>{{"big", "large", "huge"}}<<"big"<<"large";

    QTest::newRow("test2")<<QList<QStringList>{{"big", "large", "huge"}}<<"large"<<"big";

    QTest::newRow("test3")<<QList<QStringList>{{"big", "large", "huge"},{"small","little"}}<<"small"<<"little";

    QTest::newRow("test4")<<QList<QStringList>{{"big", "large", "huge"}}<<"nan"<<"";

}
void newtest::testsynonm()
{
    QFETCH(QList<QStringList>,Dictionary);
    QFETCH(QString, word);
    QFETCH(QString, synonym);

    QString result;

    findSynonym(Dictionary, word, result);

    QCOMPARE(result, synonym);



}
