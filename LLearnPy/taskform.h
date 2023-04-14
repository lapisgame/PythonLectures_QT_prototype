#ifndef TASKFORM_H
#define TASKFORM_H

#include <QWidget>

namespace Ui {
    class TaskForm;
}

class TaskForm : public QWidget
{
    Q_OBJECT

    public:
        explicit TaskForm(QWidget *parent = nullptr);
        ~TaskForm();
        virtual void resizeEvent(QResizeEvent *event) override;

    private:
        Ui::TaskForm *ui;
        void setInterfaceStyle();
};

#endif // TASKFORM_H
