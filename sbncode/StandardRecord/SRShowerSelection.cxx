////////////////////////////////////////////////////////////////////////
// \file    SRShowerSelection.cxx
////////////////////////////////////////////////////////////////////////

#include "sbncode/StandardRecord/SRShowerSelection.h"

namespace caf
{
  SRShowerSelection::SRShowerSelection():
      densityGradient(-5.0),
      densityGradientPower(-5.0),
      trackLength(-5.0),
      trackWidth(-5.0),
      showerResiduals(std::vector<float>())
      {
      }
} // end namespace caf
//////////////////////////////////////////////////////////////////////////////


