//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Aug 10 16:20:25 2017 by ROOT version 6.10/04)
//      from the StreamerInfo in file AOD.root
//////////////////////////////////////////////////////////


#ifndef DataVector_xAOD__Vertex_v1__h
#define DataVector_xAOD__Vertex_v1__h
namespace xAOD {
class Vertex_v1;
} // end of namespace.
template <typename T0> class DataVector;
template <> class DataVector<xAOD::Vertex_v1>;

#include "Rtypes.h"
#include "xAOD__Vertex_v1.h"
#include "Riostream.h"
#include <list>
#include <vector>

template <typename T0> class DataVector;
template <> class DataVector<xAOD::Vertex_v1> {

public:
// Nested classes declaration.

public:
// Data Members.
   std::vector<xAOD::Vertex_v1> This;
   //DataVector<xAOD::Vertex_v1> This;        //<xAOD::Vertex_v1> Used to call the proper TStreamerInfo case

   /*DataVector();
   DataVector(const DataVector & );
   virtual ~DataVector();*/

};
#endif