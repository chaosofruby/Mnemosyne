
#include "AppResourceId.h"
#include "Main.h"

using namespace Tizen::Base;
using namespace Tizen::Ui;
using namespace Tizen::Ui::Controls;


Main::Main(void)
{
}

Main::~Main(void)
{
}

bool
Main::Initialize()
{
	Form::Construct(IDF_MAIN);

	return true;
}

result
Main::OnInitializing(void)
{
	result r = E_SUCCESS;

	// TODO: Add your initialization code here

	return r;
}

result
Main::OnTerminating(void)
{
	result r = E_SUCCESS;

	// TODO: Add your termination code here

	return r;
}


