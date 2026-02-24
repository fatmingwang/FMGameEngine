#include <emscripten.h>

extern "C" {
    EMSCRIPTEN_KEEPALIVE
        int MyAdd(int a, int b)
    {
        return a + b;
    }
}

// 
//D:\Work\emsdk\upstream\emscripten\emcc WasmProject.cpp -o WasmProject.js -s EXPORTED_FUNCTIONS="['_MyAdd']" -s EXPORTED_RUNTIME_METHODS="['ccall', 'cwrap']" -s ENVIRONMENT=web -s ALLOW_MEMORY_GROWTH=1
// 
//python CppGenerateTS.python
//