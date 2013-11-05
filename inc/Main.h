
#ifndef _MAIN_H_
#define _MAIN_H_

#include <FBase.h>
#include <FUi.h>



class Main :
	public Tizen::Ui::Controls::Form
{

// Construction
public:
	Main(void);
	virtual ~Main(void);
	bool Initialize();
	result OnInitializing(void);
	result OnTerminating(void);

// Implementation
protected:

// Generated call-back functions
public:

};

#endif
