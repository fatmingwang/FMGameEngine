#ifdef WIN32
//#pragma comment(lib, "../lib/OpenAL32.lib")
#pragma comment(lib, "../lib/alut.lib")
#pragma comment(lib, "../lib/glew.lib")
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
	#pragma comment(lib, "../lib/Debug/Bullet.lib")
	#pragma comment(lib, "../lib/Debug/Core.lib")
	#pragma comment(lib, "../lib/Debug/Freetype.lib")
	#pragma comment(lib, "../lib/Debug/ogg.lib")
#else
	#pragma comment(lib, "../lib/Release/Bullet.lib")
	#pragma comment(lib, "../lib/Release/FatmingCollada.lib")
	#pragma comment(lib, "../lib/Release/ogg.lib")
	#pragma comment(lib, "../lib/Release/Freetype.lib")
#endif