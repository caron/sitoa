/************************************************************************************************************************************
Copyright 2017 Autodesk, Inc. All rights reserved.

Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. 
You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, 
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
See the License for the specific language governing permissions and limitations under the License.
************************************************************************************************************************************/

#include <ai.h>

AI_SHADER_NODE_EXPORT_METHODS(Color4PassThroughMethods);

enum Color4PassThroughParams
{
   p_input,
   p_channels,
};

node_parameters
{
   AiParameterRGBA( "input"   , 0.0f, 0.0f, 0.0f, 0.0f );
   AiParameterArray("channels", AiArrayAllocate(0, 0, AI_TYPE_RGBA));
}

node_initialize {}
node_update {}
node_finish {}

shader_evaluate
{
   AiShaderEvalParamArray(p_channels);
   sg->out.RGBA() = AiShaderEvalParamRGBA(p_input);
}

