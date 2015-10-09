#ifndef APPCONTAINER_H
#define APPCONTAINER_H
//headers
#include <QtSql>
#include <QSqlDatabase>
//класс, содержащий необходимые глобальные объекты приложения
class AppContainer
{
public:
    AppContainer();
    QSqlDatabase db;
};

#endif // APPCONTAINER_H
