// Falling Boxes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "FreeGLUTCallbacks.h"
#include "FallingBoxesApplication.h"
#include "SegmentedSensorTestApp.h"


int main(int argc, char **argv)
{
	//FallingBoxesApplication fallingBoxes(PERSPECTIVE);
	//FallingBoxesApplication fallingBoxes(ORTHOGRAPHIC);
	SegmentedSensorTestApp segmentedTestApp(PERSPECTIVE);
	return glutmain(argc, argv, 1024, 768, "SegmentedSensorTestApp", &segmentedTestApp);
}
