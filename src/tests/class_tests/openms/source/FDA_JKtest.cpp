#include <OpenMS/FORMAT/MzMLFile.h>
#include <OpenMS/ANALYSIS/TOPDOWN/FLASHDeconvAlgorithm.h>
#include <arrow/api.h>


using namespace OpenMS;
using namespace std;


// the actual main function needed to create an executable
int main()
{
  FLASHDeconvAlgorithm fd_algo = FLASHDeconvAlgorithm();
  // load test data
  PeakMap input;
  MzMLFile().load("C:\\Users\\qlcsk\\Desktop\\jkvision\\openms\\pyFLASHDeconv\\thermo.mzML", input);
  //MzMLFile().load("C:\\Users\\qlcsk\\Desktop\\jkvision\\openms\\pyFLASHDeconv\\OpenMS_2\\src\\tests\\class_tests\\openms\\data\\FLASHDeconv_sample_input1.mzML", input);*/

  //for (int i = 0; i < 100; ++i)
  //{
  //  cout << fd_algo.getScanNumber(input, i) << endl;
  //}
  cout << fd_algo.getAveragine().getMaxIsotopeIndex() << endl;
  cout << fd_algo.getAveragine().getLeftCountFromApex(50) << endl;
  cout << fd_algo.getAveragine().getLeftCountFromApex(100.25) << endl;
  cout << fd_algo.getAveragine().getRightCountFromApex(50) << endl;
  cout << fd_algo.getAveragine().getRightCountFromApex(100.25) << endl;
  cout << fd_algo.getAveragine().getApexIndex(50) << endl;     // 0.0251458
  cout << fd_algo.getAveragine().getApexIndex(100.25) << endl; // 0.0476584
  cout << fd_algo.getAveragine().getLastIndex(50) << endl;
  cout << fd_algo.getAveragine().getLastIndex(100.25) << endl;
  cout << fd_algo.getAveragine().getAverageMassDelta(50) << endl;
  cout << fd_algo.getAveragine().getAverageMassDelta(100.25) << endl;
  cout << fd_algo.getAveragine().getMostAbundantMassDelta(50) << endl;
  cout << fd_algo.getAveragine().getMostAbundantMassDelta(100.25) << endl;

  std::vector<DeconvolvedSpectrum> deconvolved_spectra;
  std::vector<FLASHDeconvHelperStructs::MassFeature> deconvolved_features;
  //cout << "jaekwan" << endl;
  //cout << deconvolved_features.size()<<endl;
  //cout << deconvolved_spectra.size() << endl;

  cout << fd_algo.getAveragine().getMaxIsotopeIndex() << endl;
  cout << fd_algo.getAveragine().getLeftCountFromApex(50) << endl;
  cout << fd_algo.getAveragine().getLeftCountFromApex(100.25) << endl;
  cout << fd_algo.getAveragine().getRightCountFromApex(50) << endl;
  cout << fd_algo.getAveragine().getRightCountFromApex(100.25) << endl;
  cout << fd_algo.getAveragine().getApexIndex(50) << endl; // 0.0251458
  cout << fd_algo.getAveragine().getApexIndex(100.25) << endl; // 0.0476584
  cout << fd_algo.getAveragine().getLastIndex(50) << endl;
  cout << fd_algo.getAveragine().getLastIndex(100.25) << endl;
  cout << fd_algo.getAveragine().getAverageMassDelta(50) << endl;
  cout << fd_algo.getAveragine().getAverageMassDelta(100.25) << endl;
  cout << fd_algo.getAveragine().getMostAbundantMassDelta(50) << endl;
  cout << fd_algo.getAveragine().getMostAbundantMassDelta(100.25) << endl;

  //for (int i = 0; i < 1; ++i) {
  //  cout << deconvolved_features[i].avg_mass<<endl;
  //  cout << deconvolved_features[i].avg_mass << endl;
  //}

  return 0;
}
