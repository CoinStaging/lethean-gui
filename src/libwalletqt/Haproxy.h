#ifndef HAPROXY
#define HAPROXY

#include <QObject>
#include <QDebug>
namespace Monero {
    class Haproxy; // forward declaration
}
class Haproxy : public QObject
{
    Q_OBJECT
public:
    //static Haproxy * haproxy();
    Q_INVOKABLE void haproxy(const QString &host, const QString &ip, const QString &port, const QString &endpoint, const QString &endpointport, const QString &fixedHost, const QString &auth);
    Q_INVOKABLE void haproxyCert(const QString &host, const QString &certificate);
    Q_INVOKABLE void killHAproxy();
    Q_INVOKABLE QString verifyHaproxy(const QString &host, const QString &ip, const QString &provider);
private:
};

#endif // HAPROXY

