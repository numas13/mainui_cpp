#pragma once
#ifndef FRAMEWORK_H
#define FRAMEWORK_H

#include "BaseWindow.h"

class CMenuFramework : public CMenuBaseWindow
{
public:
	CMenuFramework();

	void Show();
	void Init();
	void VidInit();
	void Hide();
	bool IsRoot() { return true; }

	bool DrawAnimation(EAnimation anim);

	CMenuBannerBitmap banner;
};

#endif // FRAMEWORK_H
