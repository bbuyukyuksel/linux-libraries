# Static Library Example (.a)

- Compile source files into object files

```shell
g++ -c -std=c++17 -o temp/lib1.o -Iinclude src\lib1.cpp
g++ -c -std=c++17 -o temp/lib2.o -Iinclude src\lib2.cpp
```

- Add object files into static library file

```shell
ar rcs lib/mylib.a temp/*.o
```

- Show including files

```shell
ar -t lib\mylib.a
```

- Compile with static library

```shell
g++ -o main -Iinclude main.cpp lib\mylib.a
```
