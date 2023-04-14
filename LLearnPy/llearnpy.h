#ifndef LLEARNPY_H
#define LLEARNPY_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class LLearnPy; }
QT_END_NAMESPACE

class LLearnPy : public QMainWindow
{
    Q_OBJECT

    public:
        LLearnPy(QWidget *parent = nullptr);
        ~LLearnPy();

        virtual void resizeEvent(QResizeEvent *event) override;

    private slots:
        void on_SettingsButton_clicked();

        void on_TaskButton_clicked();

        void on_SandboxButton_clicked();

        void on_aboutButton_clicked();

        void on_LectureButton_clicked();

    private:
        void updateButtonPosition();

        Ui::LLearnPy *ui;
        void setInterfaceStyle();
};
#endif // LLEARNPY_H
