/**
 * Name        : Mnemosyne
 * Version     : 
 * Vendor      : 
 * Description : 
 */


#include "Mnemosyne.h"
#include "MnemosyneFrame.h"

using namespace Tizen::App;
using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Ui;
using namespace Tizen::Ui::Controls;

MnemosyneApp::MnemosyneApp(void)
{
}

MnemosyneApp::~MnemosyneApp(void)
{
}

UiApp*
MnemosyneApp::CreateInstance(void)
{
	// Create the instance through the constructor.
	return new MnemosyneApp();
}

bool
MnemosyneApp::OnAppInitializing(AppRegistry& appRegistry)
{
	// TODO:
	// Initialize App specific data.
	// The App's permanent data and context can be obtained from the appRegistry.
	//
	// If this method is successful, return true; otherwise, return false.
	// If this method returns false, the App will be terminated.

	// Uncomment the following statement to listen to the screen on/off events.
	//PowerManager::SetScreenEventListener(*this);

	// Create a Frame
	MnemosyneFrame* pMnemosyneFrame = new MnemosyneFrame;
	pMnemosyneFrame->Construct();
	pMnemosyneFrame->SetName(L"Mnemosyne");
	AddFrame(*pMnemosyneFrame);

	// TODO: Add your initialization code here
	return true;
}

bool
MnemosyneApp::OnAppInitialized(void)
{
	// TODO:
	// Comment.
	return true;
}

bool
MnemosyneApp::OnAppWillTerminate(void)
{
	// TODO:
	// Deallocate or release resources that are UI dependent.
	return true;
}

bool
MnemosyneApp::OnAppTerminating(AppRegistry& appRegistry, bool forcedTermination)
{
	// TODO:
	// Deallocate resources allocated by this App for termination.
	// The App's permanent data and context can be saved via appRegistry.
	return true;
}

void
MnemosyneApp::OnForeground(void)
{
	// TODO:
	// Start or resume drawing when the application is moved to the foreground.
}

void
MnemosyneApp::OnBackground(void)
{
	// TODO:
	// Stop drawing when the application is moved to the background.
}

void
MnemosyneApp::OnLowMemory(void)
{
	// TODO:
	// Free unused resources or close the application.
}

void
MnemosyneApp::OnBatteryLevelChanged(BatteryLevel batteryLevel)
{
	// TODO:
	// Handle any changes in battery level here.
	// Stop using multimedia features(camera, mp3 etc.) if the battery level is CRITICAL.
}

void
MnemosyneApp::OnScreenOn(void)
{
	// TODO:
	// Get the released resources or resume the operations that were paused or stopped in OnScreenOff().
}

void
MnemosyneApp::OnScreenOff(void)
{
	// TODO:
	// Unless there is a strong reason to do otherwise, release resources (such as 3D, media, and sensors) to allow the device
	// to enter the sleep mode to save the battery.
	// Invoking a lengthy asynchronous method within this listener method can be risky, because it is not guaranteed to invoke a
	// callback before the device enters the sleep mode.
	// Similarly, do not perform lengthy operations in this listener method. Any operation must be a quick one.
}
