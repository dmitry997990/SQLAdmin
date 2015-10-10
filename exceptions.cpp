#include "exceptions.h"
#include <QtGui>
#include <QMap>
#include <QtSql>
#include <QSqlDatabase>
#include <QString>
#include <QErrorMessage>

//конструктор класса

Exception::Exception() {

    errors[567] = "Пустое поле";

}
//метод, показывающий окно с ошибкой, если ошибка генерирована не объектом QSQlDatabase(метод перегружен)
void Exception::showError(int code) {
    //итератор словаря
    QMap<int,QString>::iterator it = errors.begin();
    //цикл поиска нужной ошибки по коду
    for(;it != errors.end(); ++it)
    {
        if(it.key() == code)
        {
            //открывание окна с текстом ошибки
            QErrorMessage em;

            em.showMessage(it.value());

        }

    }

}
//метод, показывающий окно с ошибкой, если ошибка генерирована объектом QSQlDatabase(метод перегружен)
void Exception::showError(QSqlDatabase db) {

    QErrorMessage em;

    em.showMessage(db.lastError().databaseText());

}


