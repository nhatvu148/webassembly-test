# Run main.c at https://wasdk.github.io/WasmFiddle/
# Change custom memory at https://webassembly.studio/ 
# Commands:
- emcc lib/demo.c -s WASM=1 -o public/demo.js 
- emcc lib/demo.c -s WASM=1 -o public/demo.html 
- emcc lib/demo.c -s WASM=1 -s SIDE_MODULE=1 -o public/demo.wasm 
- emcc lib/demo.c -s WASM=1 -O2 -o public/demo.js 
- emcc lib/demo.c -s WASM=1 -O2 -o public/demo.js --closure 1 
- emcc lib/demo.c -s WASM=1 -O2 --post-js public/ready.js -o public/demo.js --closure 1 
- emcc lib/demo.c -s WASM=1 -s EXPORTED_FUNCTIONS="['_getNum', '_main']" -o public/demo.js 
- emcc lib/imports.c -s WASM=1 -s -o public/imports.js
- emcc lib/test.c -s WASM=1 -s EXTRA_EXPORTED_RUNTIME_METHODS="['callMain']" -s INVOKE_RUN=0 -o public/test.js
- em++ lib/test.cpp -o public/test.js -s INVOKE_RUN=0 -s EXPORTED_FUNCTIONS="['_increment']" -s EXTRA_EXPORTED_RUNTIME_METHODS="['cwrap']"

* * *
# Template Assembly:
(module  
(type $t0 (func (param i32)))  
(type $t1 (func (param i32 i32)))  
(type $t2 (func (result i32)))  
(type $t3 (func (param i32) (result i32)))  
(type $t4 (func)) (import "env" "numLog" (func $numLog (type $t0)))  
(import "env" "stringLog" (func $stringLog (type $t1)))  
(import "env" "memory" (memory $env.memory 2))  
(func $main (export "main") (type $t2) (result i32) i32.const 42)  
(func $multiplyBy2 (export "multiplyBy2") (type $t3) (param $0 i32) (result i32) get_local $0 i32.const 1 i32.shl)  
(func $newMultiplyBy2 (export "newMultiplyBy2") (type $t0) (param $0 i32) get_local $0 i32.const 1 i32.shl call $numLog)  
(func $greet (export "greet") (type $t4) i32.const 16 i32.const 13 call $stringLog)  
(table $T0 0 anyfunc)  
(export "memory" (memory 0))  
(data (i32.const 16) "Hello from C!\00"))
