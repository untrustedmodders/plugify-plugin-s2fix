#include <dynlibutils/module.hpp>
#include <dynlibutils/virtual.hpp>
#include <dynlibutils/vthook.hpp>
#include <eiface.h>
#include <engine/igameeventsystem.h>
#include <entity2/entitysystem.h>
#include <igameevents.h>
#include <iserver.h>
#include <netmessages.h>
#include <steam_gameserver.h>
#include <vscript/ccscript.h>
#include <vscript_server.h>

#include "plugin.hpp"

Source2Fix g_fix;
EXPOSE_PLUGIN(PLUGIN_API, Source2Fix, &g_fix)
