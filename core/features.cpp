/*
Copyright (c) 2016, TU Dresden
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the TU Dresden nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL TU DRESDEN BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include "features.h"

namespace jp
{
    template<>
    void write(std::ofstream& file, const FeatureDABGR& feature)
    {
	feature.store(file);
    }
    template<>
    void read(std::ifstream& file, FeatureDABGR& feature)
    {
	feature.restore(file);
    }
    template<>
    void write(std::ofstream& file, const FeatureAbsCell& feature)
    {
	feature.store(file);
    }
    template<>
    void read(std::ifstream& file, FeatureAbsCell& feature)
    {
	feature.restore(file);
    }    
    template<>
    void write(std::ofstream& file, const FeatureAbsCoord& feature)
    {
	feature.store(file);
    }
    template<>
    void read(std::ifstream& file, FeatureAbsCoord& feature)
    {
	feature.restore(file);
    }       
    template<>
    void write(std::ofstream& file, const FeatureDAGRAY& feature)
    {
    feature.store(file);
    }
    template<>
    void read(std::ifstream& file, FeatureDAGRAY& feature)
    {
    feature.restore(file);
    }
}
