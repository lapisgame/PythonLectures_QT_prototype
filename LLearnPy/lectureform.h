#ifndef LECTUREFORM_H
#define LECTUREFORM_H

#include <QWidget>

namespace Ui {
    class LectureForm;
}

class LectureForm : public QWidget
{
    Q_OBJECT

    public:
        explicit LectureForm(QWidget *parent = nullptr);
        ~LectureForm();
        virtual void resizeEvent(QResizeEvent *event) override;

    private:
        Ui::LectureForm *ui;
        void setInterfaceStyle();
};

#endif // LECTUREFORM_H
