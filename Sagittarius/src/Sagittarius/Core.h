#pragma once

#ifdef SGT_PLATFORM_WINDOWS
	#ifdef SGT_BUILD_DLL
		#define SAGITTARIUS_API __declspec(dllexport)
	#else
		#define SAGITTARIUS_API __declspec(dllimport)
	#endif
#else
	#error Sagittarius only supports Windows!
#endif