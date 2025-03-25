#include <OpenMS/FORMAT/MzMLFile.h>
#include <OpenMS/ANALYSIS/TOPDOWN/FLASHDeconvAlgorithm.h>
#include <OpenMS/ANALYSIS/TOPDOWN/FLASHDeconvHelperStructs.h>
#include <OpenMS/DATASTRUCTURES/DefaultParamHandler.h>
#include <arrow/api.h>
#include <parquet/arrow/reader.h>
#include <iostream>
#include <arrow/io/file.h>

using namespace std;
using namespace OpenMS;

void read_parquet(const std::string& filename)
{
  //read the Parquet file
  std::shared_ptr<arrow::io::ReadableFile> infile;
  PARQUET_ASSIGN_OR_THROW(infile, arrow::io::ReadableFile::Open(filename));

  std::unique_ptr<parquet::arrow::FileReader> reader;
  PARQUET_THROW_NOT_OK(parquet::arrow::OpenFile(infile, arrow::default_memory_pool(), &reader));
  

}


// the actual main function needed to create an executable
int main()
{
  
 return 0;
}

    




