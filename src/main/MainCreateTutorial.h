/******************************************************************************************************
 * (C) 2018 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#ifndef MAIN_CREATE_TUTORIAL_H
#define MAIN_CREATE_TUTORIAL_H

#include <QObject>

class MainWindow;

/// Class to TutorialDlg for MainWindow class. This is derived from QObject 
/// so the tr function can be accessed more easily
class MainCreateTutorial : public QObject
{
public:
  /// Single constructor.
  MainCreateTutorial();

  /// Create tutorial
  void create (MainWindow &mw);

};

#endif // MAIN_CREATE_TUTORIAL_H