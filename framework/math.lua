--=========== Copyright © 2016, Planimeter, All rights reserved. =============--
--
-- Purpose:
--
--============================================================================--

local kazmath = require( "lib.kazmath" )

module( "framework.math" )

function newMat4()
	return kazmath.kmMat4New()
end
