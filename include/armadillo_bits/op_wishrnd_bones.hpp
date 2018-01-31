// Copyright 2008-2016 Conrad Sanderson (http://conradsanderson.id.au)
// Copyright 2008-2016 National ICT Australia (NICTA)
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// ------------------------------------------------------------------------


//! \addtogroup op_wishrnd
//! @{


class op_wishrnd
   {
   public:
   
   template<typename T1>
   inline static void apply(Mat<typename T1::elem_type>& out, const Op<T1,op_wishrnd>& expr);
   
   template<typename eT>
   inline static void apply_noalias_mode1(Mat<eT>& out, const Mat<eT>& S, const eT df);
   
   template<typename eT>
   inline static void apply_noalias_mode2(Mat<eT>& out, const Mat<eT>& D, const eT df);
   };



//! @}
