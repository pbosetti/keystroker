# keystroker

Super-simple library for reading a single keystroke, for C and C++ projects. Only works on Linux and UNIX (MacOS included). **Windows is not supported**.

## Installation

Use cmake `FetchContent`:

```cmake
include(FetchContent)
FetchContent_Declare(keystroker
  GIT_REPOSITORY https://github.com/pbosetti/keystroker.git
  GIT_TAG HEAD
)

FetchContent_MakeAvailable(keystroker)
include_directories(${keystroker_SOURCE_DIR}/include)

add_executable(my_executable my_source.cpp)
target_link_libraries(my_executable keystroker)
```

It is statically compiled and added to your project.

## Usage in C

```c
#include <keystroker.h>
//...
char c = read_key();
//...
```

## Usage in C++

```cpp
#include <keystroker.h>
//...
char c = keystroker::read_key();
//...
```