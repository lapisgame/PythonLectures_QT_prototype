#include "lecture_processing.h"

#include <QMessageBox>
#include <QString>

#include <map>
#include <string>
#include <iostream>

QString rep(QString str){
    return "<span style='" + str + "'>";
}

void test(){

}

std::map<QString, QString> replace_str = {
    {"}r", "</span>"},
    {"}g", "</span>"},
    {"}b", "</span>"},
    {"}s20", "</span>"},
    {"r{", "<span style='color: red'>"},
    {"g{", "<span style='color: green'>"},
    {"b{", "<span style='font-weight: bold'>"},
    {"s20{", "<span style='font-size: 20px'>"}
};

std::map<QString, std::function<void()>> mapp = {
    {"r{", test},
};


lecture_processing::lecture_processing(){
}

lecture_processing::~lecture_processing(){
}


void lecture_processing::test1(){
    QMessageBox msgBox;
    msgBox.setText("TEST1");
    msgBox.exec();
}


QString lecture_processing::replace(QString str){

    auto iter = replace_str.begin();
    while (iter != replace_str.end()){
        str = str.replace(iter->first, iter->second);
        ++iter;
    }

    return str;
}
