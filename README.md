# helloworld-ninja

1. Create a simple helloworld.c program,
2. Create a CMakeLists.txt file for it,
3. Generate Ninja build files and needed configurations: 
    $ cmake -G Ninja
4. Start the build of the project:
    $ ninja
5. Create a static library and copy the library file (.a) and header file,
    $ gcc -c calculator.c -o calculator.o
    $ ar rcs calculator.a calculator.o
6. Rebuild the project:
    $ ninja
7. Run the executable:
    $ ./helloworld
