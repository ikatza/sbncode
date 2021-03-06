////////////////////////////////////////////////////////////////////////
// \file    SRTrkChi2PID.cxx
// \brief   An SRTrkChi2PID is a high level track ParticlePID object for
//          for larana Chi2ParticleID results. 
////////////////////////////////////////////////////////////////////////

#include "sbncode/StandardRecord/SRTrkChi2PID.h"

#include <limits>

namespace caf
{

  SRTrkChi2PID::SRTrkChi2PID():
    pdg(-999),
    pid_ndof(-99),
    chi2_muon(std::numeric_limits<float>::signaling_NaN()),
    chi2_pion(std::numeric_limits<float>::signaling_NaN()),
    chi2_kaon(std::numeric_limits<float>::signaling_NaN()),
    chi2_proton(std::numeric_limits<float>::signaling_NaN()),
    pida(std::numeric_limits<float>::signaling_NaN())
  {  }

  SRTrkChi2PID::~SRTrkChi2PID(){  }

  void SRTrkChi2PID::setDefault()
  {
    pdg           = -5;
    pid_ndof      = -5;
    chi2_muon     = -5.0;
    chi2_pion     = -5.0;
    chi2_kaon     = -5.0;
    chi2_proton   = -5.0;
    pida          = -5;
  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
