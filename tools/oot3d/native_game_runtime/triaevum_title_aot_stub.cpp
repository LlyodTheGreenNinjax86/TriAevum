#include "triaevum_title_aot_abi.h"
#include "triaevum_title_whole_aot_abi.h"

namespace Oot3dNativeGame {

// HARDENED: Strip the export macro tags to align perfectly with our static contract header signatures
extern "C" const Oot3dDirectAotProgramV1 *
triaevum_title_aot_query(uint32_t requestedAbi) noexcept {
  (void)requestedAbi;
  return nullptr;
}

extern "C" const Oot3dWholeAotProgramV2 *
triaevum_title_whole_aot_query(uint32_t requestedAbi) noexcept {
  (void)requestedAbi;
  return nullptr;
}

} // namespace Oot3dNativeGame
