#ifndef SANDBOXFORM_H
#define SANDBOXFORM_H

#include <QWidget>

namespace Ui {
    class SandboxForm;
}

class SandboxForm : public QWidget
{
    Q_OBJECT

    public:
        explicit SandboxForm(QWidget *parent = nullptr);
        ~SandboxForm();
        virtual void resizeEvent(QResizeEvent *event) override;

    private:
        Ui::SandboxForm *ui;
        void setInterfaceStyle();
};

#endif // SANDBOXFORM_H
