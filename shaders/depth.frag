//=========== Copyright © 2018, Planimeter, All rights reserved. =============//
//
// Purpose:
//
//============================================================================//

#version 330

out float FragDepth;

void main()
{
	FragDepth = gl_FragCoord.z;
}
