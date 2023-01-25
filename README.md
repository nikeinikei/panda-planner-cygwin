# panda-planner-cygwin
The panda planner tools (parser, grounder, engine) ported to windows via cygwin.

# Binary distributions

Pre-compiled distributions of the parser, grounder and engine can be found in the releases.

# Building

For Building you will need an installation of cygwin with the following packages:

- cmake
- make
- gcc
- g++

To compile everything follow these steps in a cygwin terminal:

```bash
cd pandaPIengine
mkdir build
cd build
cmake ../src
make
cd ..
cd ..

cd pandaPIparser
make
cd ..

cd pandaPIgrounder
cd cpddl
make boruvka opts bliss lpsolve
make
cd ../src
make
cd ..
cd ..
```

After compiling everything, for a binary distribution you will need:

- pandaPIengine/build/pandaPIengine.exe
- pandaPIgrounder/pandaPIgrounder.exe
- pandaPIparser/pandaPIparser.exe
- cygwin-1.dll
- cygwinsdtc++-6.dll
- cyggcc_s-seh-1.dll

Put all of the above into one directory.
