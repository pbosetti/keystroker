
#ifndef KEYSTROKER_H
#define KEYSTROKER_H

#ifdef _WIN32
#error "This program is not supported on Windows."
#endif

#ifdef __cplusplus
#define DLL_EXPORT extern "C"
namespace keystroker {
#else
#define DLL_EXPORT
#endif

DLL_EXPORT char read_key();

#ifdef __cplusplus
}
#endif

#endif
