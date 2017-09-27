/************************************************************************************************************************************
Copyright 2017 Autodesk, Inc. All rights reserved.

Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. 
You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, 
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
See the License for the specific language governing permissions and limitations under the License.
************************************************************************************************************************************/

#include <ai.h>

AI_SHADER_NODE_EXPORT_METHODS(Vector2ToVector3Methods);

enum Vector2ToVector3Params
{
   p_input
};

node_parameters
{
   AiParameterVec2("input", 0.0f, 0.0f);
}

node_initialize {}
node_update {}
node_finish {}

shader_evaluate
{
   AtVector2 input = AiShaderEvalParamVec2(p_input);
   sg->out.VEC().x = input.x;
   sg->out.VEC().y = input.y;
   sg->out.VEC().z = 0.0f;
}

