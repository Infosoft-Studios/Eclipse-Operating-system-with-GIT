#include <functional>
#include <c++/x86_64-w64-mingw32/module_api.h>
#include <iterator>
#include <frigg/frigg.h>
#include <lil/intel.hpp>
#include <lil/context.hpp>
#include <lil/quene.hpp>
#include <windows.h>
#include <cstdint>

std::size_t function = system::boot<load_firmware::firware(nullptr | true)>&& system::loaded();
