# Dynamic Library Example (.so)

- Compile source files into object files

```shell
g++ -c -std=c++17 -o temp/lib1.o -Iinclude src/lib1.cpp
g++ -c -std=c++17 -o temp/lib2.o -Iinclude src/lib2.cpp
```

- Add object files into dynamic library file

```shell
g++ -shared -o lib/library.so temp/*.o 
```

- Compile with dynamic library

```shell
g++ -Llib/ -Wall -o code -Iinclude main.cpp -llibrary
```

## Make shared library available at runtime
export LD_LIBRARY_PATH=<path to .SO file>:$LD_LIBRARY_PATH