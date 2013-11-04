#ifndef _MNEMOSYNEFRAME_H_
#define _MNEMOSYNEFRAME_H_

#include <FBase.h>
#include <FUi.h>

class MnemosyneFrame
	: public Tizen::Ui::Controls::Frame
{
public:
	MnemosyneFrame(void);
	virtual ~MnemosyneFrame(void);

public:
	virtual result OnInitializing(void);
	virtual result OnTerminating(void);
};

#endif	//_MNEMOSYNEFRAME_H_
