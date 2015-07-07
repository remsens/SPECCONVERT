#ifndef QSPECCONVERTER_H
#define QSPECCONVERTER_H
#include <QQmlApplicationEngine>

#include <QObject>

class QSpecConverter : public QQmlApplicationEngine
{
public:
    QSpecConverter();
    virtual void load(const QString &filePath);
};

#endif // QSPECCONVERTER_H
