#ifndef WIZSERVICE_MESSAGECOMPLETER_H
#define WIZSERVICE_MESSAGECOMPLETER_H

#include <QCompleter>

class QLineEdit;
class QAbstractItemView;

namespace WizService {

class MessageCompleter : public QCompleter
{
    Q_OBJECT

public:
    explicit MessageCompleter(QWidget* parent);

private:
    QLineEdit* m_title;
    QAbstractItemView* m_view;
};

} // namespace WizService

#endif // WIZSERVICE_MESSAGECOMPLETER_H