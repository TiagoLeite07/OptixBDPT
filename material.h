/*
 * material.h
 *
 *  Created on: 5 de Abr de 2014
 *      Author: cesar
 */

#ifndef MATERIAL_H_
#define MATERIAL_H_

#include <optix_world.h>

rtDeclareVariable(float4, Kd, , );
rtDeclareVariable(float4, Ks, , );
rtDeclareVariable(float, Ns, , );
rtDeclareVariable(float, Ni, , );

rtTextureSampler<float4, 2> map_Kd;
rtTextureSampler<float4, 2> map_Ks;

rtTextureSampler<float, 2> map_bump;


#endif /* MATERIAL_H_ */
