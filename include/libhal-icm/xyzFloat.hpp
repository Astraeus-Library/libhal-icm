// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


#pragma once

namespace hal::icm {

class xyzFloat 
{
public:
    float x;
    float y;
    float z;

    xyzFloat();
    xyzFloat(float const x, float const y, float const z);

    xyzFloat operator+() const;
    xyzFloat operator-() const;
    xyzFloat operator+(xyzFloat const & summand) const;
    xyzFloat operator-(xyzFloat const & subtrahend) const;
    xyzFloat operator*(float const operand) const;
    xyzFloat operator/(float const divisor) const;
    xyzFloat & operator+=(xyzFloat const & summand);
    xyzFloat & operator-=(xyzFloat const & subtrahend);
    xyzFloat & operator*=(float const operand);
    xyzFloat & operator/=(float const divisor);
};

}  // namespace hal::icm