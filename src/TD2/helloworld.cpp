//
// Created by Gauthier V1.0 on 08/02/2021.
//

// You may need to build the project (run Qt uic code generator) to get "ui_helloWorld.h" resolved

#include "helloworld.h"
#include "ui_helloWorld.h"

helloWorld::helloWorld(QWidget *parent) :
        QWidget(parent), ui(new Ui::helloWorld) {
    ui->setupUi(this);
}

helloWorld::~helloWorld() {
    delete ui;
}
