#ifdef WIN32
#pragma comment(lib, "OpenAL32.lib")
#pragma comment(lib, "alut.lib")
#pragma comment(lib, "glew.lib")
#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "Glu32.lib")
#pragma comment(lib, "gdi32.lib")
#pragma comment(lib, "User32.lib")
#pragma comment(lib, "Psapi.lib")
#pragma comment(lib, "wsock32.lib")
#pragma comment(lib, "iphlpapi.lib")
#pragma comment(lib, "Urlmon.lib")
#endif


#ifdef _DEBUG
	#pragma comment(lib, "Debug/Bullet.lib")
	#pragma comment(lib, "Debug/Core.lib")
	#pragma comment(lib, "Debug/Freetype.lib")
	#pragma comment(lib, "Debug/ogg.lib")
#else
	#pragma comment(lib, "Release/Bullet.lib")
	#pragma comment(lib, "Release/FatmingCollada.lib")
	#pragma comment(lib, "Release/ogg.lib")
	#pragma comment(lib, "Release/Freetype.lib")
#endif