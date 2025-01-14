#pragma once
#include "Input/Keyboard.h"
#include "Input/Mouse.h"

class Window{
public:
	Window(HINSTANCE hInstance, LPCWSTR title, int width, int height);

	void Setup(Keyboard* keyboard, Mouse* mouse);
	void SetTitle(LPCWSTR title);
	HWND GetHandler();
	bool ProcessMessages();
	void updateBounds();

	Keyboard* keyb;
	Mouse* mouse;

	HINSTANCE hInstance;
	LPCWSTR title;
	int width;
	int height;
	bool isReady;

private:
	// Windows event handling.
	static LRESULT CALLBACK WndProcSetup(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
	static LRESULT CALLBACK WndProcForward(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
	LRESULT WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

	HWND hWnd;
};