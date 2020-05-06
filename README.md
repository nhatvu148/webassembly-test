// Run main.c at https://wasdk.github.io/WasmFiddle/
// Change custom memory at https://webassembly.studio/
(module
(type $t0 (func (param i32)))
  (type $t1 (func (param i32 i32)))
(type $t2 (func (result i32)))
  (type $t3 (func (param i32) (result i32)))
(type $t4 (func))
  (import "env" "numLog" (func $numLog (type $t0)))
  (import "env" "stringLog" (func $stringLog (type $t1)))
  (import "env" "memory" (memory $env.memory 2))
(func $main (export "main") (type $t2) (result i32)
i32.const 42)
(func $multiplyBy2 (export "multiplyBy2") (type $t3) (param $0 i32) (result i32)
    get_local $0
i32.const 1
i32.shl)
(func $newMultiplyBy2 (export "newMultiplyBy2") (type $t0) (param $0 i32)
    get_local $0
i32.const 1
i32.shl
call $numLog)
  (func $greet (export "greet") (type $t4)
    i32.const 16
    i32.const 13
    call $stringLog)
(table \$T0 0 anyfunc)
(export "memory" (memory 0))
(data (i32.const 16) "Hello from C!\00"))
