# Static and Shared Libraries

## Why libraries are used:
Libraries employ a software design also known as "shared components" or "archive libraries", which groups together multiple compiled object code files into a single file known as a library. Typically C functions/C++ classes and methods which can be shared by more than one application are broken out of the application's source code, compiled and bundled into a library. The C standard libraries and C++ STL are examples of shared components which can be linked with your code. The benefit is that each and every object file need not be stated when linking because the developer can reference the library collective. This simplifies the multiple use and sharing of software components between applications. It also allows application vendors a way to simply release an API to interface with an application. Components which are large can be created for dynamic use, thus the library can remain separate from the executable reducing it's size and thus less disk space is used for the application. The library components are then called by various applications for use when needed.

Benefits include:
- Component reuse: update one library, shared resource takes up less disk space.
- Version management: Linux libraries can cohabitate old and new versions on a single system.
- Component Specialization: niche and specialized developers can focus on their core competency on a single library. Simplifies testing and verification.

## Linux Library Types:
There are two Linux C/C++ library types which can be created:

- 1. Static libraries (.a): Library of object code which is linked with, and becomes part of the application.
- 2. Dynamically linked shared object libraries (.so): There is only one form of this library but it can be used in two ways.
  - 2.1. Dynamically linked at run time. The libraries must be available during compile/link phase. The shared objects are not included into the executable component but are tied to the execution.
  - 2.2. Dynamically loaded/unloaded and linked during execution (i.e. browser plug-in) using the dynamic linking loader system functions.

### Library naming conventions:

Libraries are typically named with the prefix "lib". This is true for all the C standard libraries. When linking, the command line reference to the library will not contain the library prefix or suffix.
Consider the following compile and link command: gcc src-file.c -lm -lpthread
The libraries referenced in this example for inclusion during linking are the math library ("m") and the thread library ("pthread"). They are found in /usr/lib/libm.a and /usr/lib/libpthread.a.


Note: The GNU compiler now has the command line option "-pthread" while older versions of the compiler specify the pthread library explicitly with "-lpthread". Thus now you are more likely to see gcc src-file.c -lm -pthread

# More for Static Library (.a)

.a file is an "ar" archive. Not unlike a tar archive, it stores .o or object files, allowing them to be pulled out of the archive, and linked into a program, among other things. You could use ar to store other files if you wanted.

You can get a listing of the members of an ar file with the -t parameter, for instance:

`ar -t /usr/lib/libc.a`

# Examples
- [Static Library](./static_library)
- [Dynamic Library](./dynamic_library)