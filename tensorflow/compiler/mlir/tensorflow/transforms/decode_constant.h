/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef TENSORFLOW_COMPILER_MLIR_TENSORFLOW_TRANSFORMS_DECODE_CONSTANT_H_
#define TENSORFLOW_COMPILER_MLIR_TENSORFLOW_TRANSFORMS_DECODE_CONSTANT_H_

#include "mlir/Pass/Pass.h"  // TF:local_config_mlir

namespace mlir {
namespace TF {
// Creates a pass to decode and reset opaque values in constant ops into
// readable values.
// Note that this pass assumes RaiseTFControlFlow pass has already been run.
FunctionPassBase *CreateDecodeConstantPass();
}  // namespace TF
}  // namespace mlir

#endif  // TENSORFLOW_COMPILER_MLIR_TENSORFLOW_TRANSFORMS_DECODE_CONSTANT_H_