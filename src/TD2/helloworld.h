//
// Created by Gauthier V1.0 on 08/02/2021.
//

#ifndef CADET_COLLIGNON_CPP_HELLOWORLD_H
#define CADET_COLLIGNON_CPP_HELLOWORLD_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class helloWorld; }
QT_END_NAMESPACE

class helloWorld : public QWidget {
    Q_OBJECT

public:
    explicit helloWorld(QWidget *parent = nullptr);

    ~helloWorld() override;

private:
    Ui::helloWorld *ui;
};

#endif //CADET_COLLIGNON_CPP_HELLOWORLD_H
