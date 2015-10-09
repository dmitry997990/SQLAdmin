#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

//headers

#include <QMap>
#include <QtGui>
#include <QErrorMessage>
#include <QtSql>
#include <QSqlDatabase>
#include <QString>

//класс исключений

class Exception
{

public:

    Exception(); //конструктор

    QMap<int,QString> errors; //словарь, содржащий значения кодов и ошибок

    void showError(int code); //метод, реализующий открытие всплывающего окна с тектом ошибки

    void showError(QSqlDatabase db);

};

#endif // EXCEPTIONS_H
