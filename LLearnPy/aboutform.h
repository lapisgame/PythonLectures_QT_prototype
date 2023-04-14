#ifndef ABOUTFORM_H
#define ABOUTFORM_H

#include <QWidget>

namespace Ui {
    class AboutForm;
}

class AboutForm : public QWidget
{
    Q_OBJECT

    public:
        explicit AboutForm(QWidget *parent = nullptr);
        ~AboutForm();
        virtual void resizeEvent(QResizeEvent *event) override;

    private:
        Ui::AboutForm *ui;
        void setInterfaceStyle();
};

#endif // ABOUTFORM_H
