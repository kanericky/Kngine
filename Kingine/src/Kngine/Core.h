#pragma once

#ifdef KE_PLATFORM_WINDOWS
	#ifdef KE_BUILD_DLL
		#define KNGINE_API __declspec(dllexport)
	#else
		#define KNGINE_API __declspec(dllimport)
	#endif

#else
	#error KNGINE only support Windows!
#endif

#define BIT(x) (1 << x)