#include "LoginDialog.h"
#include "ui_LoginDialog.h"
#include "config.h"
LoginDialog :: LoginDialog (QWidget * parent):
     QDialog (parent),
     ui (new Ui :: LoginDialog)
{
     ui-> setupUi (this);
     ui-> UserEdit-> setPlaceholderText ("Veuillez saisir le nom d'utilisateur du professeur");
     ui-> PwdEdit-> setEchoMode (QLineEdit :: Password);
     ui-> PwdEdit-> setPlaceholderText ("Veuillez saisir le mot de passe");
     ui-> PwdEdit-> setMaxLength (11);
     connect (ui-> buttonBox, & QDialogButtonBox :: accepted, this, [=] () {qDebug ("ok");});
     connect (ui-> buttonBox, & QDialogButtonBox :: rejected, this, [=] () {qDebug ("annuler");});
     // Test stage
// ui-> PwdEdit-> setText (PASSWORD);
// ui-> UserEdit-> setText (USERNAME);
}

LoginDialog :: ~ LoginDialog ()
{
     delete ui;
}

QString LoginDialog :: getUSER ()
{
     return ui-> UserEdit-> text ();
}

QString LoginDialog :: getPWD ()
{
     return ui-> PwdEdit-> text ();
}
