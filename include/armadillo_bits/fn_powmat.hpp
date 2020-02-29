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


//! \addtogroup fn_powmat
//! @{


template<typename T1>
arma_warn_unused
inline
typename enable_if2< is_supported_blas_type<typename T1::elem_type>::value, const Op<T1,op_powmat> >::result
powmat(const Base<typename T1::elem_type,T1>& X, const sword y)
  {
  arma_extra_debug_sigprint();
  
  const uword aux_a = (y < sword(0)) ? uword(-y) : uword(y);
  const uword aux_b = (y < sword(0)) ? uword(1)  : uword(0);
  
  return Op<T1,op_powmat>(X.get_ref(), aux_a, aux_b);
  }


//! @}
