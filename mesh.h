/*
 * mesh.h
 *
 *  Created on: 5 de Abr de 2014
 *      Author: cesar
 */

#ifndef MESH_H_
#define MESH_H_

#include <optix_world.h>
#include "optix_context.h"

rtBuffer<int3>index_buffer;
rtBuffer<float3>vertex_buffer;
rtBuffer<float3>normal_buffer;

rtBuffer<float2>texCoord_buffer;
//rtDeclareVariable(bool, hasTexCoord, , );

rtBuffer<float3>tangent_buffer;
rtBuffer<float3>bitangent_buffer;
//rtDeclareVariable(bool, hasTangents, , );


#endif /* MESH_H_ */
