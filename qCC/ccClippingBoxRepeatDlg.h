//##########################################################################
//#                                                                        #
//#                            CLOUDCOMPARE                                #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU General Public License as published by  #
//#  the Free Software Foundation; version 2 of the License.               #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#          COPYRIGHT: EDF R&D / TELECOM ParisTech (ENST-TSI)             #
//#                                                                        #
//##########################################################################

#ifndef CC_CLIPPING_BOX_REPEAT_DIALOG_HEADER
#define CC_CLIPPING_BOX_REPEAT_DIALOG_HEADER

#include <ui_clippingBoxRepeatDlg.h>

//Qt
#include <QDialog>

//! Dialog for managing clipping box based repeated processes
class ccClippingBoxRepeatDlg : public QDialog, public Ui::ClippingBoxRepeatDlg
{
	Q_OBJECT

public:

	//! Default constructor
	ccClippingBoxRepeatDlg(QWidget* parent);

protected slots:

	void onDimChecked(bool);

};

#endif //CC_CLIPPING_BOX_REPEAT_DIALOG_HEADER
