#include <QtCore/QString>
#include <QtCore/QStringList>

static QStringList list = { "foo" };

void test()
{
    QString s = "foo";
    QString s2 = "foo" "bar";
}

void testMultiPartStringLiterals()
{

    QString s = "foo""bar";
    s += "foo""bár";
    s += "foo"
         "bar"
         "Test";
    s = QString::fromLatin1("foo" "bar");
    s += QString::fromLatin1("foo" "bar");
}
