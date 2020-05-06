#include <emscripten.h>
#include <stdio.h>

// Declare a reuseable JS function
EM_JS(void, jsFunction, (int n), {
    console.log("Call from EM_JS: " + n);
})

int main()
{
    printf("WASM ready\n");

    // Call JS function (eval)
    emscripten_run_script("console.log('Hello from C!!!')");

    // Call JS function ASYNC (eval)
    emscripten_async_run_script("console.log('Hello from C!!! - ASYNC')", 2000);

    // Get return value from JS function - INT
    int jsValue = emscripten_run_script_int("getNum()");

    // Get return value from JS function - STR
    char *jsValueStr = emscripten_run_script_string("getStr()");

    printf("Value from getNum(): %d\n", jsValue);
    printf("Value from getStr(): %s\n", jsValueStr);

    // Execute EM_JS function
    jsFunction(9999);

    return 1;
}
