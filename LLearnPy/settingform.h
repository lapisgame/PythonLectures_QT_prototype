#ifndef SETTINGFORM_H
#define SETTINGFORM_H

#include <QWidget>

namespace Ui {
    class SettingForm;
}

class SettingForm : public QWidget{
    Q_OBJECT

    public:
        explicit SettingForm(QWidget *parent = nullptr);
        ~SettingForm();
        virtual void resizeEvent(QResizeEvent *event) override;

    private:
        Ui::SettingForm *ui;
        void setInterfaceStyle();
};

#endif // SETTINGFORM_H
