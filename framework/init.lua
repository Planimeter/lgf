--=========== Copyright © 2016, Planimeter, All rights reserved. =============--
--
-- Purpose:
--
--============================================================================--

local framework = {}
_G.framework    = framework

local require = require
local pairs   = pairs

module( "framework" )

function main()
	init()
	load()

	require( "framework.event" )
	local ffi = require( "ffi" )

	while ( true ) do
		local e = nil
		repeat
			e = framework.event.poll()
			if ( e ) then
				if ( e.type == ffi.C.SDL_QUIT or
				     e.type == ffi.C.SDL_APP_TERMINATING ) then
					if ( quit() ) then return end
				end

				framework.event.handle( e )
			end
		until ( e == nil )

		update()

		if ( draw ) then
			framework.graphics.clear()
			draw()
			framework.window.swap()
		end
	end
end

function init()
	require( "framework.filesystem" )
	framework.filesystem.init( arg )
	framework.filesystem.mount( ".", nil, false )

	local c = {
		modules = {
			window   = true,
			graphics = true
		},
		window = {
			title  = "",
			x      = nil,
			y      = nil,
			width  = 800,
			height = 600
		}
	}

	if ( framework.filesystem.isFile( "conf.lua" ) ) then
		require( "conf" )
	end

	if ( framework.conf ) then
		framework.conf( c )
	end

	for k in pairs( c.modules ) do
		require( "framework." .. k )
	end

	if ( c.modules.window ) then
		local title  = c.window.title
		local x      = c.window.x
		local y      = c.window.y
		local width  = c.window.width
		local height = c.window.height
		framework.window.createWindow( title, x, y, width, height )
	end

	if ( framework.filesystem.isFile( "main.lua" ) ) then
		require( "main" )
	end
end

function load()
end

function lowmemory()
end

function visible( visible )
end

function move( x, y )
end

function resize( width, height )
end

function minimize()
end

function maximize()
end

function restore()
end

function mousefocus( focus )
end

function focus( focus )
end

function update( dt )
end

function draw()
end

function quit()
	return true
end

main()
