#pragma once

#include <Windows.h>
#pragma comment(lib, "user32.lib")
#include <Windowsx.h>
#include <bitset>

class Keyboard{
public:
	Keyboard();

	// Game Engine
	void Reset();
	bool isKeyPressed(unsigned int key);
	bool isKeyHeld(unsigned int key);
	bool isKeyReleased(unsigned int key);

	// Windows procedure
	void OnKeyPress(WPARAM wParam, LPARAM lParam);
	void OnKeyRelease(WPARAM wParam, LPARAM lParam);
	void OnChar(WPARAM wParam, LPARAM lParam);

private:
	std::bitset<256> keyState;
	std::bitset<256> keyPreviousState;
};