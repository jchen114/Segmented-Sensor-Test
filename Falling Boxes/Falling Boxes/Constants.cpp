#include "stdafx.h"
#include "Constants.h"


Constants::Constants()
{
}

void Constants::SetScreenWidth(int width) {
	m_screenWidth = width;
}

void Constants::SetScreenHeight(int height) {
	m_screenHeight = height;
}


void Constants::SetProjectionMode(ProjectionMode mode) {
	m_projectionMode = mode;
}

int Constants::GetScreenWidth() {
	return m_screenWidth;
}

int Constants::GetScreenHeight() {
	return m_screenHeight;
}

ProjectionMode Constants::GetProjectionMode() {
	return m_projectionMode;
}

float Constants::GetMetersToPixels(float dist2Camera) {
	return 50 / dist2Camera;
}

float Constants::Normalize(float meters, float dist2Camera, Dimension dimension) {
	float p2m = GetMetersToPixels(dist2Camera);
	float m2p = 1 / p2m;

	float pix = meters * m2p;

	switch (dimension)
	{
	case HEIGHT:
		return pix / ((float)m_screenHeight / 2);
		break;
	case WIDTH: {

		float width_proportion = pix / (m_screenWidth / 2);
		float aspectRatio = m_screenWidth / (float)m_screenHeight;
		return width_proportion * aspectRatio;
		//return pix / (m_screenWidth / 2);
	}
		break;
	default:
		break;
	}
}

float Constants::DegreesToRadians(float degrees) {

	return degrees * DEG_2_RAD;

}

float Constants::RadiansToDegrees(float radians) {
	return radians * (1 / DEG_2_RAD);
}

Constants::~Constants()
{
}
