// TestCario.cpp : Defines the entry point for the console application.
//


#include <windows.h>
#include <cmath>
#include "stdafx.h"
#include "..\..\..\cairo\src\cairo.h"
#include "..\..\..\cairo\src\cairo-win32.h"

int main()
{
	cairo_surface_t *cairo_surface_t_temp = cairo_image_surface_create_from_png("1.png");
	cairo_surface_write_to_png(cairo_surface_t_temp, "2.png");

	return 0;
}

