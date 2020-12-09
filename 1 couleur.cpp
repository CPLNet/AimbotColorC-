// RedElipse.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <windows.h>
int main()

{

	int speed = 0;
	std::cout << "SPEED : 200 is good=";
	std::cin >> speed;

	int fov = 250;

	while (1) {

		HDC hdc = GetDC(0);
		
		
		POINT a;
		GetCursorPos(&a);
	
	
	
		COLORREF Red;
	
	
	
		
				Red = GetPixel(hdc, a.x+fov, a.y+fov);
				Red = GetPixel(hdc, a.x-fov, a.y-fov);
						int r = GetRValue(Red);
						int g = GetGValue(Red);
						int b = GetBValue(Red);
					
					
									//SetPixel(hdc, (a.x / 170) + 960 + x, (a.y / 120) + 540 + y, 0x0000FF);
						
							
						
							
						if ((GetAsyncKeyState(VK_LBUTTON) && 0x100) != 0)
						{
							(r + g + b) == (a.x && a.y);
							if ((r ==34) && (g ==34) & (b ==34)) 
							{
								
							


									mouse_event(MOUSEEVENTF_MOVE, a.x / speed, 0, 0, 0);
									
								



								}
					
						}
						

						
						

				
		ReleaseDC(NULL, hdc);
		Sleep(1);
}
}
